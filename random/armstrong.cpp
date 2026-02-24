#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0,rem=0,count=0,pow = 1;
    cout << "Enter a number: ";
    cin >> a;
    int cpy = a;
    int cpy1 = a;
    while(cpy!=0)
    {
        //rem = cpy % 10;
        cpy = cpy/10;
        count ++;
    }
    while(cpy1 != 0)
    {
        rem = cpy1%10;
        pow=1;
        for(int i=1;i<=count;i++)
        {
            pow = pow*rem;
        }
        sum = sum + pow;
        cpy1 = cpy1/10;
    }
    //cout << sum;
    if(a == sum)
    {
        cout << " " << a << " is an armstrong number.";
    }
    else 
    {
        cout << " " << a << " is not an armstrong number.";
    }
}