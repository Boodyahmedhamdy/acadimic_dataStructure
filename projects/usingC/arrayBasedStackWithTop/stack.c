#include <stdio.h>
#include "stack.h"

void create_stack(Stack *theStack)
{
    /*
        to initialize the stack
        make the top = -1
    */
    theStack->top = -1;
}


int is_empty(Stack theStack) // implementation level only
{
    /*
        to make sure that the stack is empty or not
    */
    if(theStack.top < 0)
        return 1;
    return 0;
}

int is_full(Stack theStack) // implementation level only
{
    /*
        to make sure that the stack is full or not
    */
    if (theStack.top > MAX - 1)
        return 1;
    return 0;
}


int stack_size(Stack theStack)
{
    return theStack.top +1;
}


void push(entry_type item, Stack *theStack) // implementation level only
{
    /*
        put the item in the stack
        ...............................
        1. increase the top of the stack
            as the first time it will be = -1 .. so we need to make it 0 to fill the array with index 0
        2. add the item in the new top index of the array
    */

    // theStack->data[theStack->top] = item;

    theStack->top++;
    theStack->data[theStack->top] = item;
}

void pop(Stack *theStack) // implementation level only
{
    /*
        get the item from the stack
        ............................
        1. print the last element of the stack .. in the top index
        2. decrease the top by one to be looking at the previous element in the stack
    */

    printf("%d\n", theStack->data[theStack->top]);
    theStack->top--;
}


entry_type pop_without_change(Stack theStack) // user level too
{
    /*
        returning a copy from the last element in the satck form the sent stack
    */
    return theStack.data[theStack.top];
}

entry_type pop_and_return(Stack *theStack)
{
    return theStack->data[theStack->top--];
}


entry_type get_first_element(Stack theStack) // user level
{
    return theStack.data[0];
}


void copy(Stack originalStack, Stack *theCopyStack) // user level
{

    for (int i = 0 ; i < originalStack.top + 1 ; i++)
    {
        theCopyStack->data[i] = originalStack.data[i];
    }

}



void clear(Stack *theStack);
void destroy(Stack *theStack);



void display(Stack theStack) // should be in user level
{

    for (int i = theStack.top ; i > -1 ; i--)
    {
        printf("%d -> ", theStack.data[i]);
    }

    printf("NULL\n");

}


void display_all(Stack theStack) // should be in user level
{

    for(int i = MAX ; i > -1 ; i--)
    {
        printf(" %d ", theStack.data[i]);
    }

}
