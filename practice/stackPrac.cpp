#include <bits/stdc++.h>
using namespace std;
class Stack
{
    private:
    int top;
    int* stack;
    int size;
    
    public:
    Stack(int cap)
    {
        size = cap;
        stack = new int[size];;
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size-1;
    }

    void push(int val)
    {
        if(isFull())
        {
            cout << "The stack is full!!!, no more pushe ops allowed" << endl;
            return;
        }
        stack[++top] = val;
        cout << "Pushed " << val << " onto the stack" << endl;
    }

    int pop()
    {
        if(isEmpty())
        {
            cout << "The stack is empty, no element to pop" << endl;
            return -1;
        }
        return stack[top--];
    }

    int peek()
    {
        if(isEmpty())
        {
            cout << "The stack is empty, no element to peek at" << endl;
            return -1;
        }
        return stack[top];
    }

};

int main()
{
    Stack s(3);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.peek();

    cout << "popped element: " << s.pop() << endl;
    cout << "popped element: " << s.pop() << endl;
    cout << "popped element: " << s.pop() << endl;
    cout << "popped element: " << s.pop() << endl;
    
    
    s.peek();
}