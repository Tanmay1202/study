#include <bits/stdc++.h>
using namespace std;
class account
{
    public: int a = 90;
    public: int fun(){
        return a;
    }
};
int main ()
{
    account obj;
    cout << obj.a;
    cout << obj.fun();
}
