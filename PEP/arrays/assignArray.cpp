#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i*34;
    }

    cout << "array: ";
    int sum = 0;

    for (int i = size-1; i >=0; i--)
    {
        cout << arr[i] << " ";
        sum+=arr[i];
    }

    cout << endl;

    cout << "sum: " << sum;

    return 0;



    
}