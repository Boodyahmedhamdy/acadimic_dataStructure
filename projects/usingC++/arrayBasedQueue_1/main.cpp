#include <iostream>
#include "queue.h"
using namespace std;

int main()
{

    QueueType ahmed;
    ahmed.display();
    cout << endl;

    ahmed.in_queue(3);
    ahmed.in_queue(43);
    ahmed.in_queue(1);
    ahmed.in_queue(90);
    ahmed.display();

    ahmed.out_queue();
    int r = ahmed.out_and_return();
    cout << endl;
    ahmed.display();
    cout <<endl <<  r << endl;






    return 0;
}
