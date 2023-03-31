#include <stddef.h>
#include <sys/queue.h>
#include "peer_lists.h"

static struct blacklist blacklist;
struct blacklist *blacklist_ptr;

static struct peers peers;
struct peers *peers_ptr;

void init_lists() {
  TAILQ_INIT(&peers);
  TAILQ_INIT(&blacklist);
  blacklist_ptr = &blacklist;
  peers_ptr = &peers;
}
