#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    //cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    //selection sort

    for(int i=0; i<n-1; i++)
    {
        int smallest = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[smallest])
            smallest = j;
        }
        swap(arr[i], arr[smallest]);
    }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
}