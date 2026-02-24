#include <bits/stdc++.h>
using namespace std;
class Queue
{
    private:
    int size;
    int* queue;
    int front;
    int rear;

    public:
    Queue(int cap)
    {
        size = cap;
        queue = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int val)
    {   
        if(isFull())
        {
            cout << "the queue is full" << endl;
            return;
        }

        if(front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = val;

        cout << val << " enqueued to queue." << endl;

    }

    int dequeue()
    {
        if(front == -1 || front > rear)
        {
            cout << "The queue is empty." << endl;
            return -1;
        }

        int dq = queue[front];
        front ++;
        if(front > rear)
        {
            front = rear = -1;
        }
        return dq;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return queue[front];

    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return rear == size - 1;
    }

    void display()
    {
        if(front == -1)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        for(int i=front; i<=rear; i++)
        {
            cout << queue[i] << "<- ";
        }
        cout << endl;
        
    }
};

int main()
{
    Queue q(3);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    cout << "Front element is: " << q.peek() << endl;

    q.display();


}