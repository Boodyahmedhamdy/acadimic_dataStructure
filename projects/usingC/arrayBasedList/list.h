#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define entryType int
#define MAX 10

typedef struct x
{
    int length ;
    entryType data[MAX];

}List;

void create_list(List *theList);

int get_length(List theList);
int is_empty(List theList);
int is_full(List theList);

void add(List *theList, entryType item);
void add_in(List *theList, entryType item, int pos);

entryType get_first(List *theList);
entryType get_from(List *theList, int pos);
entryType get_last(List *theList);

void show_last(List theList);
void show_first(List theList);




#endif // LIST_H_INCLUDED
