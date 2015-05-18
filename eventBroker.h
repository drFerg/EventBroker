#include "topic.h"
#include "tuple.h"

typedef void * Broker;

Broker *broker_init();
Tuple *broker_pull(Broker *b, Topic *t);
int broker_push(Broker *b, Tuple *t);
int broker_destroy(Broker *b);
