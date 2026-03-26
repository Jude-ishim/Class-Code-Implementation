#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5];     // queue size = 5
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // ENQUEUE (insert at rear)
    void enqueue(int item) {
        if (rear == 4) {   // last index = 4 (size 5)
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)   // first insertion
            front = 0;

        rear++;
        arr[rear] = item;

        cout << item << " inserted\n";
    }

    // DEQUEUE (remove from front)
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << arr[front] << " removed\n";
        front++;
    }

    // DISPLAY
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}