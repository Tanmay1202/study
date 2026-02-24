#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int i, int n)
{
    if(i>=n/2)
    return;

    swap(arr[i], arr[n-i-1]);
    reverse(arr,i+1,n);
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter values: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before reversal: ";
    print(arr, n);
    reverse(arr,0,n);
    cout << "Array after reversal: ";
    print(arr, n);

}