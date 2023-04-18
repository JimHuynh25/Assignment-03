#include <iostream>
#include "Header2.h"

using namespace std;

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Front element: " << q.peek() << endl;
    cout << "Queue size: " << q.sizeOfQueue() << endl;

    q.dequeue();
    q.dequeue();

    cout << "After dequeuing two elements:" << endl;
    cout << "Front element: " << q.peek() << endl;
    cout << "Queue size: " << q.sizeOfQueue() << endl;

    return 0;
}