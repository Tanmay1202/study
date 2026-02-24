#include <bits/stdc++.h>
using namespace std;

class Time
{

    int hours;
    int minutes;
    public:
    Time(int t)
    {
        hours = t/60;
        minutes = t%60;
    }
    void display()
    {
        cout <<hours<<"Hrs and "<<minutes<<"mnts ";
    }
};

int main()
{
    int t = 90;

    Time t1(t);
    t1.display();
    return 0;

}