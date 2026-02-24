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

class Stack
{
    public:
    Node* top;
    Stack()
    {
        top  = NULL;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void push(int val)
    {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << "Node inserted with value: " << val << endl;
    }

    int pop()
    {
        if(isEmpty())
        {
            cout << "Stack is empty, nothing to pop" << end;
            return -1;
        }
        Node* temp = top;
        int popped = temp->data;
        top = top->next;
        delete temp;
        return popped;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout << "i'll pop you only, " << endl;
            return -1;
        }
        return top->data;
    }

    int display()
    {
        if(isEmpty())
        {
            cout << "what you peeking at ra, denge!!!" << endl;
            return -1;
        }
        Node* temp = top;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};