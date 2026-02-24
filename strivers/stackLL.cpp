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
    Node *top;
    Stack()
    {
        top = NULL;
    }
    ~Stack()
    {
        while(!isEmpty())
        {
            pop();
        }
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
            cout << "The stack is empty." << endl;
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
            cout << "The stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "The stack is empty" << endl;
            return;
        }
        Node* temp = top;
        while(temp!=NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" <<endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout <<"Stack: ";
    s.display();

    cout << "The top element is: " << s.peek() << endl;

    cout << "The popped element is: " << s.pop() << endl;;
    cout << "The popped element is: " << s.pop() << endl;
    cout << "The popped element is: " << s.pop() << endl;
    cout << "The popped element is: " << s.pop() << endl;

    cout << "The top element is: " << s.peek() << endl;


    
}