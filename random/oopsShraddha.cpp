#include <bits/stdc++.h>
using namespace std;
class teacher
{

private: 
    double salary;
    //properties
public:
    string name;
    string dept;
    string subject;
    //non-parametarised
    teacher() {
        dept = "Computer Science";
    }
    //parametarised
    teacher(string name, string dept, string subject, double salary) {
        //dept = dept;this gets confusing for the compiler as well as for the user so we use this pointer instead.
        this->dept = dept; // this pointer is used to so that there is a difference between object property and parameter.
        this->name = name; // the value to left of equals is the object propert and is signified by this pointer while the one on the right is the constructor parameter.
        this->subject = subject;
        this->salary = salary;
    }
    
    // string name;
    // string dept;
    // string subject;
    
    //methods or member functions
    void changeDept(string newDept){
        dept = newDept;
    }
    
    //setter function --> used to set values of private properties
    void setSalary(double s)
    {
        salary = s;
    }
    
    //getter function --> used to get values of private properties
    double getsalary(double s)
    {
        return salary;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Account{
public: 
    string accountId;
    string username; 

    //data hiding
private:
    string balance;
    string password;

};


int main()
{
    teacher t1("shardha","Computer scinece", "c++", 25000);
    t1.getInfo();
    cout << t1.dept;
    return 0;
}
// two constructors can be used at the same time, they just should be of different types,
// in the above code the constructors used have the same nane 