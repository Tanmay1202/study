#include <iostream>
using namespace std;

int main(void)
{
    float *interest;
    float *time;
    float *amount;

    interest = new float;
    time = new float;
    amount = new float;
    cout << "Enter interest, time and amount: ";
    cin >> *interest >> *time >> *amount;

    cout << "Simple interest : " << (*amount * *time * *interest) / 100;


    return 0;
}