#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
    public:
    Node* front;
    Node* rear;

    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int val)
    {
        Node* newNode = new Node(val);
        if(rear == NULL)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    int dequeue()
    {
        if(front == NULL)
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        Node* temp = front;
        int dq = temp->data;
        front = front->next;
        if(front == NULL)
        {
            rear = NULL;
        }
        delete temp;
        return dq;
    }

    int peek()
    {
        if(front == NULL)
        {
            cout << "the queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    void display()
    {
        if(front == NULL)
        {
            cout << "The queue is empty." << endl;
        }
        Node* temp = front;
        while(temp!=NULL)
        {
            cout << temp->data << " <- ";
            temp = temp->next;
        }
        cout << "NULL";
        cout << endl;
    }

};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();

    q.display();

    cout << "The front element is: " << q.peek();

    q.dequeue();
    q.dequeue();
    cout << endl;

    q.display();
}