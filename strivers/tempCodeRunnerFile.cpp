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