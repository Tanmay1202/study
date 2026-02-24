#include <bits/stdc++.h>
using namespace std;
class Queue
{
    public:
    int *queue;
    int size;
    int front;
    int rear;
    Queue(int cap)
    {
        size = cap;
        queue = new int[size];
        front = rear = -1;
    }
    
    void enqueue(int val)
    {
        if(rear == size - 1)
        {
            cout << "Queue overflow, cannot enqueue " << val << endl;
            return;
        }
        if(front == -1)
        front = 0;
        
        queue[++rear] = val;
        cout << val << " enqueued";
        cout << endl;
    }
    
    int dequeue()
    {
        if(front > rear || front == -1)
        {
            cout << "The queue is empty" << endl;
            return -1;
        }
        
        int dq = queue[front];
        front++;
        if(front > rear)
        {
            front = rear = -1;
        }
        return dq;
    }
    
    int peek()
    {
        if(front == -1)
        {
            cout << "The queue is empty" << endl;
            return -1;
        }
        return queue[front];
    }
};

int main()
{
    Queue q(3);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    
    cout << "peek: " << q.peek() << endl;
    
    cout << "Popped value: " << q.dequeue() << endl;
    cout << "Popped value: " << q.dequeue() << endl;
    cout << "Popped value: " << q.dequeue() << endl;
    cout << "Popped value: " << q.dequeue() << endl;
    
    
}
