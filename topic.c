#include <stdlib.h>
#include <string.h>
#include "topic.h"

typedef struct topic Topic {
    char *name;
}

Topic *topic_create(char *name) {
    Topic *t = (Topic *) malloc(sizeof(Topic) + strlen(name));
    if (t == NULL) return NULL;
    strcpy(t->name, name, strlen(name));
    return t;
}

void topic_free(Topic *t) {
    if (t == NULL) return;
    free(t->name);
    free(t);
}