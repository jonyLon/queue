#include "Queue.h"

int main()
{
    Queue one(5, 2);
    one.enqueue(55);
    one.enqueue(44);
    one.enqueue(44);
    one.enqueue(44);
    one.enqueue(26);
    one.dequeue();
    one.show();
    one.dequeue();
    one.dequeue();
    one.dequeue();
    one.dequeue();
    cout << boolalpha << one.isFull() << endl;
    cout << boolalpha << one.isEmpty() << endl;
}

