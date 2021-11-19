#include "queue.h"
#include <iostream>
#define mnoe 10


    // constructor
    QueueType::QueueType()
    {
        this->length = 0;
        this->head = 0;
        this->tail = mnoe - 1;
    }

    bool QueueType::is_empty()
    {
        return (this->length == 0);
    }

    bool QueueType::is_full()
    {

    }



    void QueueType::in_queue(entryType item)
    {
        this->tail = (this->tail + 1) % mnoe;
        this->data[this->tail] = item;
        this->length++;
    }

    void QueueType::out_queue()
    {
        this->head = (this->head +1) % mnoe;
        this->length--;
    }

    entryType QueueType::out_and_return()
    {
        entryType temp = this->data[this->head];
        this->head = (this->head +1) % mnoe;
        this->length--;
        return temp;
    }


    entryType QueueType::get_head()
    {
        return this->data[this->head];
    }

    entryType QueueType::get_tail()
    {
        return this->data[this->tail];
    }

    void QueueType::display()
    {
        for(int i = this->head ; i < this->tail ; i = (i + 1) % mnoe)
        {
            std::cout<< this->data[i] << " -> ";
        }
        std::cout << this->data[tail];
    }
