#include <bits/stdc++.h>
using namespace std;
int add(int x, int y)
{
    //cout << "The addition is: ";
    int c = (x) + (y);
    return c;

}
int main()
{
    int x,y,a;
    cout << "Enter the numbers to be added: ";
    cin >> x >> y;
    a = add(x,y);
    cout << "SUM : " << a;
}