#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks[5]; // assuming 5 subjects
    float percentage;
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) 
        {
            cin >> marks[i];
        }
    }
    void calculatePercentage() 
    {
        int total = 0;
        for (int i = 0; i < 5; i++) 
        {
            total += marks[i];
        }
        percentage = (total / 500.0) * 100;
    }
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
class StudentManager {
public:
    Student students[100]; // assuming max 100 students
    int count=1;
    void addStudent() 
    {
        students[count].inputData();
        students[count].calculatePercentage();
        count++;
    }
    void displayStudents() 
    {
        for (int i = 0; i < count; i++)
        {
            students[i].displayStudent();
        }
    }
    void findHighestPercentageStudent() 
    {
        int maxIndex = 0;
        for (int i = 1; i < count; i++) 
        {
            if (students[i].percentage > students[maxIndex].percentage) {
                maxIndex = i;
            }
        }
        cout << "Student with highest percentage: " << students[maxIndex].name << endl;
        cout << "Percentage: " << students[maxIndex].percentage << "%" << endl;
    }
};
int main() 
{
    StudentManager manager;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter details of student " << (i + 1) << ":" << endl;
        manager.addStudent();
    }
    cout << "Students' details:" << endl;
    manager.displayStudents();
    manager.findHighestPercentageStudent();
    return 0;
}