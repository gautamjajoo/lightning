/* We can't seem to route the following:
 *
 * Expect route 03c173897878996287a8100469f954dd820fcd8941daed91c327f168f3329be0bf -> 0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae -> 02ea622d5c8d6143f15ed3ce1d501dd0d3d09d3b1c83a44d0034949f8a9ab60f06
 *
 * getchannels:
 * {'channels': [{'active': True, 'short_id': '6990:2:1/1', 'fee_per_kw': 10, 'delay': 5, 'flags': 1, 'destination': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'source': '02ea622d5c8d6143f15ed3ce1d501dd0d3d09d3b1c83a44d0034949f8a9ab60f06', 'last_update': 1504064344}, {'active': True, 'short_id': '6989:2:1/0', 'fee_per_kw': 10, 'delay': 5, 'flags': 0, 'destination': '03c173897878996287a8100469f954dd820fcd8941daed91c327f168f3329be0bf', 'source': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'last_update': 1504064344}, {'active': True, 'short_id': '6990:2:1/0', 'fee_per_kw': 10, 'delay': 5, 'flags': 0, 'destination': '02ea622d5c8d6143f15ed3ce1d501dd0d3d09d3b1c83a44d0034949f8a9ab60f06', 'source': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'last_update': 1504064344}, {'active': True, 'short_id': '6989:2:1/1', 'fee_per_kw': 10, 'delay': 5, 'flags': 1, 'destination': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'source': '03c173897878996287a8100469f954dd820fcd8941daed91c327f168f3329be0bf', 'last_update': 1504064344}]}
 */
#include <common/status.h>

#include <stdio.h>
#define status_fmt(level, fmt, ...)					\
	do { printf((fmt) ,##__VA_ARGS__); printf("\n"); } while(0)

#include "../routing.c"
#include "../gossip_store.c"

struct broadcast_state *new_broadcast_state(tal_t *ctx UNNEEDED)
{
	return NULL;
}

/* AUTOGENERATED MOCKS START */
/* Generated stub for fromwire_channel_announcement */
bool fromwire_channel_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, secp256k1_ecdsa_signature *node_signature_1 UNNEEDED, secp256k1_ecdsa_signature *node_signature_2 UNNEEDED, secp256k1_ecdsa_signature *bitcoin_signature_1 UNNEEDED, secp256k1_ecdsa_signature *bitcoin_signature_2 UNNEEDED, u8 **features UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, struct pubkey *node_id_1 UNNEEDED, struct pubkey *node_id_2 UNNEEDED, struct pubkey *bitcoin_key_1 UNNEEDED, struct pubkey *bitcoin_key_2 UNNEEDED)
{ fprintf(stderr, "fromwire_channel_announcement called!\n"); abort(); }
/* Generated stub for fromwire_channel_update */
bool fromwire_channel_update(const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, u32 *timestamp UNNEEDED, u16 *flags UNNEEDED, u16 *cltv_expiry_delta UNNEEDED, u64 *htlc_minimum_msat UNNEEDED, u32 *fee_base_msat UNNEEDED, u32 *fee_proportional_millionths UNNEEDED)
{ fprintf(stderr, "fromwire_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_gossip_local_add_channel */
bool fromwire_gossip_local_add_channel(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED, struct bitcoin_blkid *chain_hash UNNEEDED, struct pubkey *remote_node_id UNNEEDED, u16 *cltv_expiry_delta UNNEEDED, u64 *htlc_minimum_msat UNNEEDED, u32 *fee_base_msat UNNEEDED, u32 *fee_proportional_millionths UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_local_add_channel called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_announcement */
bool fromwire_gossip_store_channel_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **announcement UNNEEDED, u64 *satoshis UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_announcement called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_delete */
bool fromwire_gossip_store_channel_delete(const void *p UNNEEDED, struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_delete called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_channel_update */
bool fromwire_gossip_store_channel_update(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **update UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_channel_update called!\n"); abort(); }
/* Generated stub for fromwire_gossip_store_node_announcement */
bool fromwire_gossip_store_node_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, u8 **announcement UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_store_node_announcement called!\n"); abort(); }
/* Generated stub for fromwire_node_announcement */
bool fromwire_node_announcement(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, secp256k1_ecdsa_signature *signature UNNEEDED, u8 **features UNNEEDED, u32 *timestamp UNNEEDED, struct pubkey *node_id UNNEEDED, u8 rgb_color[3] UNNEEDED, u8 alias[32] UNNEEDED, u8 **addresses UNNEEDED)
{ fprintf(stderr, "fromwire_node_announcement called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_wireaddr */
bool fromwire_wireaddr(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "fromwire_wireaddr called!\n"); abort(); }
/* Generated stub for onion_type_name */
const char *onion_type_name(int e UNNEEDED)
{ fprintf(stderr, "onion_type_name called!\n"); abort(); }
/* Generated stub for replace_broadcast */
bool replace_broadcast(const tal_t *ctx UNNEEDED,
		       struct broadcast_state *bstate UNNEEDED,
		       u64 *index UNNEEDED,
		       const u8 *payload TAKES UNNEEDED)
{ fprintf(stderr, "replace_broadcast called!\n"); abort(); }
/* Generated stub for sanitize_error */
char *sanitize_error(const tal_t *ctx UNNEEDED, const u8 *errmsg UNNEEDED,
		     struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "sanitize_error called!\n"); abort(); }
/* Generated stub for status_failed */
void status_failed(enum status_failreason code UNNEEDED,
		   const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "status_failed called!\n"); abort(); }
/* Generated stub for towire_errorfmt */
u8 *towire_errorfmt(const tal_t *ctx UNNEEDED,
		    const struct channel_id *channel UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_errorfmt called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_announcement */
u8 *towire_gossip_store_channel_announcement(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED, u64 satoshis UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_announcement called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_delete */
u8 *towire_gossip_store_channel_delete(const tal_t *ctx UNNEEDED, const struct short_channel_id *short_channel_id UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_delete called!\n"); abort(); }
/* Generated stub for towire_gossip_store_channel_update */
u8 *towire_gossip_store_channel_update(const tal_t *ctx UNNEEDED, const u8 *update UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_channel_update called!\n"); abort(); }
/* Generated stub for towire_gossip_store_node_announcement */
u8 *towire_gossip_store_node_announcement(const tal_t *ctx UNNEEDED, const u8 *announcement UNNEEDED)
{ fprintf(stderr, "towire_gossip_store_node_announcement called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

const void *trc;

static struct half_chan *
get_or_make_connection(struct routing_state *rstate,
		       const struct pubkey *from_id,
		       const struct pubkey *to_id,
		       const char *shortid)
{
	struct short_channel_id scid;
	struct chan *chan;

	if (!short_channel_id_from_str(shortid, strlen(shortid), &scid))
		abort();
	chan = get_channel(rstate, &scid);
	if (!chan)
		chan = new_chan(rstate, &scid, from_id, to_id);

	return &chan->half[pubkey_idx(from_id, to_id)];
}

static bool channel_is_between(const struct chan *chan,
			       const struct pubkey *a, const struct pubkey *b)
{
	if (pubkey_eq(&chan->nodes[0]->id, a)
	    && pubkey_eq(&chan->nodes[1]->id, b))
		return true;

	if (pubkey_eq(&chan->nodes[0]->id, b)
	    && pubkey_eq(&chan->nodes[1]->id, a))
		return true;

	return false;
}

int main(void)
{
	static const struct bitcoin_blkid zerohash;
	struct half_chan *nc;
	struct routing_state *rstate;
	struct pubkey a, b, c;
	u64 fee;
	struct chan **route;
	const double riskfactor = 1.0 / BLOCKS_PER_YEAR / 10000;

	secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY
						 | SECP256K1_CONTEXT_SIGN);
	setup_tmpctx();

	pubkey_from_hexstr("03c173897878996287a8100469f954dd820fcd8941daed91c327f168f3329be0bf",
			   strlen("03c173897878996287a8100469f954dd820fcd8941daed91c327f168f3329be0bf"),
			   &a);
	pubkey_from_hexstr("0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae",
			   strlen("0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae"),
			   &b);
	pubkey_from_hexstr("02ea622d5c8d6143f15ed3ce1d501dd0d3d09d3b1c83a44d0034949f8a9ab60f06",
			   strlen("02ea622d5c8d6143f15ed3ce1d501dd0d3d09d3b1c83a44d0034949f8a9ab60f06"),
			   &c);

	rstate = new_routing_state(tmpctx, &zerohash, &a, 0);

	/* [{'active': True, 'short_id': '6990:2:1/1', 'fee_per_kw': 10, 'delay': 5, 'flags': 1, 'destination': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'source': '02ea622d5c8d6143f15ed3ce1d501dd0d3d09d3b1c83a44d0034949f8a9ab60f06', 'last_update': 1504064344}, */
	nc = get_or_make_connection(rstate, &c, &b, "6990:2:1");
	nc->active = true;
	nc->base_fee = 0;
	nc->proportional_fee = 10;
	nc->delay = 5;
	nc->flags = 1;
	nc->last_timestamp = 1504064344;

	/* {'active': True, 'short_id': '6989:2:1/0', 'fee_per_kw': 10, 'delay': 5, 'flags': 0, 'destination': '03c173897878996287a8100469f954dd820fcd8941daed91c327f168f3329be0bf', 'source': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'last_update': 1504064344}, */
	nc = get_or_make_connection(rstate, &b, &a, "6989:2:1");
	nc->active = true;
	nc->base_fee = 0;
	nc->proportional_fee = 10;
	nc->delay = 5;
	nc->flags = 0;
	nc->last_timestamp = 1504064344;

	/* {'active': True, 'short_id': '6990:2:1/0', 'fee_per_kw': 10, 'delay': 5, 'flags': 0, 'destination': '02ea622d5c8d6143f15ed3ce1d501dd0d3d09d3b1c83a44d0034949f8a9ab60f06', 'source': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'last_update': 1504064344}, */
	nc = get_or_make_connection(rstate, &b, &c, "6990:2:1");
	nc->active = true;
	nc->base_fee = 0;
	nc->proportional_fee = 10;
	nc->delay = 5;
	nc->flags = 0;
	nc->last_timestamp = 1504064344;

	/* {'active': True, 'short_id': '6989:2:1/1', 'fee_per_kw': 10, 'delay': 5, 'flags': 1, 'destination': '0230ad0e74ea03976b28fda587bb75bdd357a1938af4424156a18265167f5e40ae', 'source': '03c173897878996287a8100469f954dd820fcd8941daed91c327f168f3329be0bf', 'last_update': 1504064344}]} */
	nc = get_or_make_connection(rstate, &a, &b, "6989:2:1");
	nc->active = true;
	nc->base_fee = 0;
	nc->proportional_fee = 10;
	nc->delay = 5;
	nc->flags = 1;
	nc->last_timestamp = 1504064344;

	route = find_route(tmpctx, rstate, &a, &c, 100000, riskfactor, 0.0, NULL, &fee);
	assert(route);
	assert(tal_count(route) == 2);
	assert(channel_is_between(route[0], &a, &b));
	assert(channel_is_between(route[1], &b, &c));

	tal_free(tmpctx);
	secp256k1_context_destroy(secp256k1_ctx);
	return 0;
}
