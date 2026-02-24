#include <bits/stdc++.h>
using namespace std;
class Stack
{
    private:
    int *stack;
    int size;
    int top;
    public:
    Stack(int cap)
    {
        size = cap;
        stack = new int[cap];
        top = -1;
    }


void push(int val)
{
    if(top == size-1)
    {
        cout << "Stack Overflow, Cannot push" << val << endl;
        return;
    }
    stack[++top] = val;
    cout << "Pushed " << val << "onto the stack."<< endl;
}

int pop()
{
    if(top == -1)
    {
        cout << "Stack is empty! No top element." << endl;
        return -1;
    }
    return stack[top--];
}

int peek()
{
    if(top == -1)
    {
        cout << "Stack is empty! No top element." << endl;
        return -1;
    }
    return stack[top];
}

bool isFull()
{
    return top == size - 1;
}

bool isEmpty()
{
    return top == -1;
}

~Stack()
{
    delete[] stack;
}
};



int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "The top element is: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;

    if(s.isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}