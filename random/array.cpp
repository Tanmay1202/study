#include <bits/stdc++.h>

using namespace std;

int linearSearch(int a[0], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
    }
}

int main()
{
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int a[20] = { 20, 14, 34, 32, 45};
    int size = sizeof(a)/sizeof(a[0]);
    int r = linearSearch(a, size, key);
    if(r==1)
    {
        cout << key << " is present.";
    }
    else
    {
        cout << key << " is not present.";
    }
}