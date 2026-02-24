#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int a=1;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            a = 0;
            break;
        }
    }
    if(a==1)
    {
        cout << num << " is prime";
    }
    else
    {
        cout << num << " is not prime";
    }

}