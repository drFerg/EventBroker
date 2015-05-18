#ifndef TOPIC_H
#define TOPIC_H

typedef void * Topic;

Topic *topic_create(char *name);
void topic_free(Topic *t);

#endif /* TOPIC_H */