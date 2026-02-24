#include <bits/stdc++.h>
using namespace std;
class data
{
    private:
    int num1;
    public:
    data(int n)
    {
        num1=n;
    }
    //friend data operator+(data d1, data d2);
    int data operator+(data &d2)
    {
        data result(0);
        result.num1= num1 + d2.num1;
        return result;
    }
    void display()
    {
        cout << "Value of num1 = "<<num1;
    }
};

    // data operator+(data d1, data d2)
    // {
    //     data d3(0);
    //     d3.num1=d1.num1 + d2.num1;
    //     return d3;
    // }

int main()
{
    data d1(10), d2(20), result(0);
    result = d1 + d2;
    result.display();

}
