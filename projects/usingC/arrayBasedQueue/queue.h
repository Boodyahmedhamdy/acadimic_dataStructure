#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define MAX 10
#define entrytype int
typedef struct x {

    entrytype data[MAX];
    int front, rear, len;
}Queue;

void create_Queue(Queue* theQueue);


int is_empty(Queue theQueue);
int is_full(Queue theQueue);

void inQueue(Queue* theQueue, entrytype item);
entrytype outQueue(Queue* theQueue);


#endif // QUEUE_H_INCLUDED
