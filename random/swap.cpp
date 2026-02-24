#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter two values";
    cin >> x >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "a after swap: " << x << "\n" << "b after swap: " << y;

}