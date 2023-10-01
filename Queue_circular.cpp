#include<iostream>
using namespace std;

class Queue {
    int front;
    int rear;
    int *arr;
    int size;
public:
    Queue() {
        front = rear = -1;
        size = 3;
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    int isEmpty() {
        if (front == -1 && rear == -1) {
            return 1;
        }
        else {
            return 0;
        }
    }

    int isFull() {
        if ((rear + 1) % size == front) {
            return 1;
        }
        else {
            return 0;
        }
    }

    void enQueue(int ele) {
        if (isFull()) {
            cout << "\nQueue Overflow";
        }
        else {
            if (isEmpty()) {
                front = rear = 0;
            }
            else {
                rear = (rear + 1) % size;
            }
            arr[rear] = ele;
        }
    }

    int deQueue() {
        if (isEmpty()) {
            cout << "\nQueue Underflow";
            return -1;
        }
        else if (front == rear) {
            int ele = arr[front];
            front = rear = -1;
            return ele;
        }
        else {
            int ele = arr[front];
            front = (front + 1) % size;
            return ele;
        }
    }
};

int main() {
    Queue q;
    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    }
    
    q.enQueue(3);
    q.enQueue(334);
    q.enQueue(3);
    // q.enQueue(3);

    cout << "\nDeQueue Element=" << q.deQueue();
    cout << "\nDeQueue Element=" << q.deQueue();
    cout << "\nDeQueue Element=" << q.deQueue();
    
    q.enQueue(3);
    q.enQueue(3);
    q.enQueue(3);
    q.enQueue(3);

    if (q.isEmpty()) {
        cout << "Queue is empty" << endl;
    }
    
    return 0;
}
