#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
int main()
{
    printf("Hello world!\n");
    Queue q;
    create_Queue(&q);
    inQueue(&q, 2);
    inQueue(&q, 3);
    inQueue(&q, 5);
    inQueue(&q, 77);
    inQueue(&q, 77);
    inQueue(&q, 77);

    while(!is_empty(q))
        printf("%d\n", outQueue(&q));





}
