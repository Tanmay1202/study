#include <bits/stdc++.h>
using namespace std;

int fibonacci(int t)
{
    if(t<=1)
    return t;
    else
    return fibonacci(t-1) + fibonacci(t-2);
}

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    int result = fibonacci(n);
    cout << "The " << n << "th term is " << result;

}

