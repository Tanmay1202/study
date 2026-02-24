#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2;
    int sum = 0;
    for (int i = 1; i <= 200; i++)
    {
        sum += a;
        a = a+2;
    }

    cout << sum;
    
}