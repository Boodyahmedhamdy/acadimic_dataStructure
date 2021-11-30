#include "queue.h"

void create_Queue(Queue* theQueue)
{
    theQueue->front = 0;
    theQueue->rear = MAX - 1;
    theQueue->len = 0;
}


int is_empty(Queue theQueue)
{
    return (theQueue.len == 0);
}
int is_full(Queue theQueue)
{
    return (theQueue.len == MAX);
}

void inQueue(Queue* theQueue, entrytype item)
{
    theQueue->rear = (theQueue->rear + 1) % MAX;
    theQueue->data[theQueue->rear] = item;
    theQueue->len++;
}
entrytype outQueue(Queue* theQueue)
{
    entrytype res;
    res = theQueue->data[theQueue->front];
    theQueue->front = (theQueue->front + 1) % MAX;
    theQueue->len--;
    return res;
}
