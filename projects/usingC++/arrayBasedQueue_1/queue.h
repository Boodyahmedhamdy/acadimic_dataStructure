#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define entryType int
#define mnoe 10

class QueueType {

private:
    int head, tail;
    int length;
    entryType data[mnoe];


public:
    bool is_empty();
    bool is_full();

    entryType get_head();
    entryType get_tail();


    void in_queue(entryType item);

    void out_queue();
    entryType out_and_return();
    QueueType();

    void display();


};


#endif // QUEUE_H_INCLUDED
