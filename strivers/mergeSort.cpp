#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1];
    int R[n2];

    for(int i=0; i<n1; i++)
    {
        L[i] = arr[i + l];
    }

    for(int i=0; i<n2; i++)
    {
        R[i] = arr[m + i + 1];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2)
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
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
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    print(arr, n);

    mergeSort(arr, 0, n-1);

    cout << "Sorted Array: ";
    print(arr, n);

    

}