#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 10
#define entry_type int

typedef struct x {

    int top; // the top of the stack
    entry_type data[MAX]; // all the data
}Stack;

void create_stack(Stack *theStack);

int is_empty(Stack theStack); // implementation level only
int is_full(Stack theStack); // implementation level only

int stack_size(Stack theStack);

void push(int item, Stack *theStack); // implementation level only

void pop(Stack *theStack); // implementation level only
entry_type pop_without_change(Stack theStack); // user level too
entry_type pop_and_return(Stack *theStack); // user level

entry_type get_first_element(Stack theStack); // user level

void copy(Stack originalStack, Stack *theCopyStack); // user level

void clear(Stack *theStack);
void destroy(Stack *theStack); // user level

void display(Stack theStack); // should be in user level
void display_all(Stack theStack); // should be in user level



#endif // STACK_H_INCLUDED
