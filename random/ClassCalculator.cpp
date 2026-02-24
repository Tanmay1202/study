#include <bits/stdc++.h>
using namespace std;
class calculator 
{
    public: int mul(int a, int b){
        return a*b;
    }
    public: int div(int a, int b){
        return a/b;
    }
    public: int add(int a, int b){
        return a+b;
    }
    public: int sub(int a, int b){
        return a-b;
    }
};
int main()
{
    calculator obj;
    int a,b;
    char c;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << "Enter the operation: ";
    cin >> c;
    switch(c)
    {
        case '+':
            cout << obj.add(a,b);
            break;
        case '-':
            cout << obj.sub(a,b);
            break;
        case '*':
            cout << obj.mul(a,b);
            break;
        case '/':
            cout << obj.div(a,b);
            break;
        default:
            cout << "Invalid Input";
    }
    return 0;
}