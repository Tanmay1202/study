#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data, priority;
    Node* next;
    
    Node(int data, int priority)
    {
        this->data = data;
        this->priority = priority;
        this->next = NULL;
    }
};

class PriorityQueue
{
    public:
    Node* top;
    
    PriorityQueue()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void enqueue(int data, int priority)
    {
        Node* newNode = new Node(data, priority);
        if(top == NULL || priority > top->priority)
        {
            newNode->next = top;
            top = newNode;
            return;
        }
        Node* temp = top;
        while(temp->next != NULL && temp->next->priority>priority)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int dequeue()
    {
        if(isEmpty())
        {
            cout << "The queue is empty";
            return -1;
        }
        Node* temp = top;
        int dq = top->data;
        top = top->next;
        delete temp;
        return dq;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout << "The queue is empty";
            return -1;
        }
        return top->data;
    }

    void display()
    {
        Node* temp = top;
        while(temp != NULL)
        {
            cout << temp->data << " <- ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    PriorityQueue q;
    q.enqueue(10,1);
    q.enqueue(20,2);
    q.enqueue(30,4);
    q.enqueue(40,5);
    q.enqueue(50,3);

    q.display();

    q.dequeue();

    q.display();

    q.peek();

    q.display();

}