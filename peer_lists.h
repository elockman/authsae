#ifndef _SAE_PEER_LISTS_H_
#define _SAE_PEER_LISTS_H_

#include <sys/queue.h>

TAILQ_HEAD(blacklist, candidate);
TAILQ_HEAD(peers, candidate);

extern struct /* TAILQ_HEAD(blacklist, candidate) */ blacklist *blacklist_ptr;
extern struct /* TAILQ_HEAD(peers, candidate) */ peers *peers_ptr;

void init_lists();

#define for_each_peer(peer) TAILQ_FOREACH(peer, peers_ptr, entry)

#endif /* _SAE_PEER_LISTS_H_ */
