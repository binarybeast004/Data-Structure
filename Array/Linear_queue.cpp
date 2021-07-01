// Implement a Queueto overcome the limitations of a Linear Queue. 
// Explain your program and your techniques behind the implementation.

#include <iostream>

using namespace std;

class Queue {
    int arr[100], front, rear;

    public:
    Queue() {
        front = -1;
        rear = -1;
    }
    bool isFull() {
        if (front == (rear + 1)) {
            return true;
        }
        return false;
    }
    bool isEmpty() {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full";
        } else {
            if (isEmpty()) {
                rear =front = -1;
            }
            rear = (rear + 1) % 100;
            arr[rear] = x;
        }
    }
    int dequeue() {
        int x;
        if (isEmpty()) {
            cout << "Empty" << endl;
            return 0;
        } else {
            x = arr[front];
            if (front == rear) {
                rear = front = -1;
            }
            else {
                front = (front + 1) % 100;
            }
            return x;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(43129);
    q.enqueue(113045);
    q.enqueue(109688);
    q.enqueue(200000);


    cout << q.dequeue() << "\n\n";
    cout << q.dequeue() << "\n\n";
    cout << q.dequeue() << "\n\n";
    cout << q.dequeue() << "\n\n";

  return 0;
}
