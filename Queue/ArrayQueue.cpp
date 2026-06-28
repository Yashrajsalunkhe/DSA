#include <iostream>
using namespace std;

class Queue
{
    int arr[100];
    int front;
    int rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue(int x)
    {
        rear++;
        arr[rear] = x;
    }

    void dequeue()
    {
        if(front > rear)
        {
            cout << "Queue Empty\n";
            return;
        }

        front++;
    }

    int Front()
    {
        if(front > rear)
            return -1;

        return arr[front];
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.Front() << endl;

    q.dequeue();

    cout << q.Front() << endl;
}
