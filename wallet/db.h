#ifndef WALLET_DB_H
#define WALLET_DB_H

#include "config.h"
#include <ccan/short_types/short_types.h>
#include <ccan/tal/tal.h>

#include <sqlite3.h>
#include <stdbool.h>

struct db {
	char *filename;
	bool in_transaction;
	const char *err;
	sqlite3 *sql;
};

/**
 * db_setup - Open a the lightningd database and update the schema
 *
 * Opens the database, creating it if necessary, and applying
 * migrations until the schema is updated to the current state.
 *
 * Params:
 *  @ctx: the tal_t context to allocate from
 *  @log: where to log messages to
 */
struct db *db_setup(const tal_t *ctx);

/**
 * db_query - Prepare and execute a query, and return the result
 */
sqlite3_stmt *PRINTF_FMT(3, 4)
	db_query(const char *caller, struct db *db, const char *fmt, ...);

bool PRINTF_FMT(3, 4)
	db_exec(const char *caller, struct db *db, const char *fmt, ...);

/**
 * db_begin_transaction - Begin a transaction
 *
 * We do not support nesting multiple transactions, so make sure that
 * we are not in a transaction when calling this. Returns true if we
 * succeeded in starting a transaction.
 */
bool db_begin_transaction(struct db *db);

/**
 * db_commit_transaction - Commit a running transaction
 *
 * Requires that we are currently in a transaction. Returns whether
 * the commit was successful.
 */
bool db_commit_transaction(struct db *db);

/**
 * db_rollback_transaction - Whoops... undo! undo!
 */
bool db_rollback_transaction(struct db *db);

/**
 * db_set_intvar - Set an integer variable in the database
 *
 * Utility function to store generic integer values in the
 * database.
 */
bool db_set_intvar(struct db *db, char *varname, s64 val);

/**
 * db_get_intvar - Retrieve an integer variable from the database
 *
 * Either returns the value in the database, or @defval if
 * the query failed or no such variable exists.
 */
s64 db_get_intvar(struct db *db, char *varname, s64 defval);

/**
 * sqlite3_column_hexval - Helper to populate a binary field from a hex value
 */
bool sqlite3_column_hexval(sqlite3_stmt *s, int col, void *dest,
			   size_t destlen);

/**
 * db_prepare -- Prepare a DB query/command
 *
 * Tiny wrapper around `sqlite3_prepare_v2` that checks and sets
 * errors like `db_query` and `db_exec` do. It returns a statement
 * `stmt` if the given query/command was successfully compiled into a
 * statement, `NULL` otherwise. On failure `db->err` will be set with
 * the human readable error.
 *
 * @db: Database to query/exec
 * @query: The SQL statement to compile
 */
#define db_prepare(db,query) db_prepare_(__func__,db,query)
sqlite3_stmt *db_prepare_(const char *caller, struct db *db, const char *query);

/**
 * db_exec_prepared -- Execute a prepared statement
 *
 * After preparing a statement using `db_prepare`, and after binding
 * all non-null variables using the `sqlite3_bind_*` functions, it can
 * be executed with this function. It is a small, transaction-aware,
 * wrapper around `sqlite3_step`, that also sets `db->err` if the
 * execution fails. This will take ownership of `stmt` and will free
 * it before returning.
 *
 * @db: The database to execute on
 * @stmt: The prepared statement to execute
 */
#define db_exec_prepared(db,stmt) db_exec_prepared_(__func__,db,stmt)
bool db_exec_prepared_(const char *caller, struct db *db, sqlite3_stmt *stmt);

#endif /* WALLET_DB_H */
