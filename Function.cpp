#include "Header2.h"
using namespace std;

Queue::Queue(int capacity) {
    front = 0;
    rear = -1;
    size = capacity;
    arr = new int[size];
}

Queue::~Queue() {
    delete[] arr;
}

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue overflow" << endl;
        return;
    }
    rear++;
    arr[rear] = value;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue underflow" << endl;
        return -1;
    }
    int item = arr[front];
    front++;
    return item;
}

int Queue::peek() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[front];
}

bool Queue::isEmpty() {
    return (rear < front);
}

bool Queue::isFull() {
    return (rear == size - 1);
}

int Queue::sizeOfQueue() {
    return (rear - front + 1);
}
