#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    Node* next;
    int data;
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
            cout << "The queue is empty";
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
            cout << "The queue is emtpy";
            return -1;
        }
        return front->data;
    }
};