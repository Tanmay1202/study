//write a program takes an input of age and prints  if you are an adult or not
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int age;
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "Adult";
//     }
//     else {
//         cout << "Not an adult";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age>=18)
    {
        if(age>=55 && age<=57)
        {
            cout << "eligible for job but retirement soon."; 
        }
        else if(age>57)
        {
            cout << "retirement soon.";
        }
        else
        {
            cout << "retirement soon.";
        }
    }
    else if(age<1)
    {
        cout << "Invalid Input.";
    }
    else
    {
        cout << "Eligibility criteria not met.";
    }
    
}