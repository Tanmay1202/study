#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;
    if(a>b && a>c)
    {
        cout << a << " is the largest of the three";
    }
    else if(b>c && b>a)
    {
        cout << b << " is the largest of the three";
    }
    else
    {
        cout << c << " is the largest of the three";
    }
}