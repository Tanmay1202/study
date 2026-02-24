#include <bits/stdc++.h>
using namespace std;
class employees
{
    public:
    float sal;
    char name[20];
    int id;
    void getEmployee()
    {
        cin >> id;
        cin >> name;
        cin >> sal;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << sal << endl;
        
    }

};

int main()
    {
        employees employee1;
        employees employee2;
        cout<<"Enter the required info for employee 1 ";
        employee1.getEmployee();
        cout<<"Enter the required info for employee 2 ";
        employee2.getEmployee();
    }
