#include <stdio.h>
#include "stack.h"

int main()
{
    Stack ahmed;
    create_stack(&ahmed);
    push(2, &ahmed);
    push(4, &ahmed);
    push(1212, &ahmed);

    display(ahmed);

    printf("%d\n", pop_and_return(&ahmed));
    printf("%d\n", pop_and_return(&ahmed));


    return 0;
}
