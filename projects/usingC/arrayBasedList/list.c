#include "list.h"

void create_list(List *theList)
{
    theList->length = 0;
}


int is_empty(List theList)
{
    return (theList.length == 0);
}

int is_full(List theList)
{
    return (theList.length >= MAX -1);
}

int get_length(List theList)
{
    return theList.length;
}



void add(List *theList, entryType item)
{
    theList->data[theList->length] = item;
    theList->length++;
}


void add_in(List *theList, entryType item, int pos)
{

    int l = theList->length;

    while(l != pos)
    {
        theList->data[l] = theList->data[l-1];
        l--;
    }
    theList->data[l] = item;

    theList->length++;

}

entryType get_first(List *theList)
{
    int res = theList->data[0];

    for (int i = 1 ; i < theList->length ; i++)
    {
        theList->data[i-1] = theList->data[i];
    }

    theList->length--;

    return res;
}


entryType get_from(List *theList, int pos)
{
    int res = theList->data[pos-1];

    for (int i = pos ; i < theList->length ; i++)
    {
        theList->data[i-1] = theList->data[i];
    }
    theList->length--;
    return res;

}
entryType get_last(List *theList)
{
    return theList->data[--theList->length];
}



void show_last(List theList)
{
    printf("%d\n", theList.data[theList.length]);
}

void show_first(List theList)
{
    printf("%d\n", theList.data[0]);
}
