#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear;
    int size;
    int *arr;

public:
    Queue(int capacity);
    ~Queue();

    void enqueue(int value);
    int dequeue();
    int peek();
    bool isEmpty();
    bool isFull();
    int sizeOfQueue();
};

