#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    int priority;
    Node* next;

    Node(int data, int priority)
    {
        this->data = data;
        this->priority = priority;
        this->next = NULL;
    }
};

class Pqueue
{
    public:
    Node* head;
    Pqueue()
    {
        head = NULL;
    }
 
    void enqueue(int val, int priority)
    {
        Node* newNode = new Node(val, priority);
        if(head == NULL || priority > head->priority)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL && temp->next->priority > priority)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    int dequeue()
    {
        if(head == NULL)
        {
            cout << "The queue is empty\n";
            return -1;
        }
        Node* temp = head;
        int dq = head->data;
        head = head->next;
        delete temp;
        return dq;
    }

    int peek()
    {
        if(head == NULL)
        {
            cout << "The queue is empty\n";
            return -1;
        }
        return head->data;
    }
}