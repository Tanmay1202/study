#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    for(int i=7; i<=9999; i+=7)
    {
        if(i%7==0)
        count++;
    }

    cout << count;
}