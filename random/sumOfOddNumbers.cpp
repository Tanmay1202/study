#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int count = 0;
    int a = 1;
    int sum = 0;

    for(int i=1; i<=5; i++)
    {
        sum = sum + a;
        a+=2;
    }

    cout << sum;
}