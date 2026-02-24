#include <bits/stdc++.h>
using namespace std;
class Book
{
    public:
    string name;
    string author;
    int year;

};

int main()
{
    int n;
    cin >> n;
    Book arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name;
        cin >> arr[i].author;
        cin >> arr[i].year;
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i].name<< " ";
        cout << arr[i].author << " ";
        cout << arr[i].year<< " ";
    }


}