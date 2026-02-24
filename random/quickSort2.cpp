#include <bits/stdc++.h>
using namespace std;

int fpivot(int arr[], int l, int r)
{
    int pivot = arr[l];
    int i = l;
    int j = r;

    while(i<j)
    {
        while(arr[i]<=pivot && i<r)
        {
            i++;
        }

        while(arr[j]>pivot && j>l)
        {
            j--;
        }
        if(i<j)
        swap(arr[i], arr[j]);
    }

    swap(arr[l], arr[j]);
    return j;
    
}

void quickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pIndex = fpivot(arr, l, r);
        quickSort(arr, l, pIndex-1);
        quickSort(arr, pIndex+1, r);
    }
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    print(arr, n);

    quickSort(arr, 0, n-1);

    cout << "Sorted Array: ";
    print(arr, n);
}