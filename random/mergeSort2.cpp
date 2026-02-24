#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1, n2;
    n1 = m - l + 1;
    n2 = r - m;
    int L[n1];
    int R[n2];

    for(int i=0; i<n1; i++)
    {
        L[i] = arr[l + i];
    }

    for(int i=0; i<n2; i++)
    {
        R[i] = arr[m + i + 1];
    }

    int i, j, k;
    i=0; 
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            k++;
            i++;
        }

        if(R[j] < L[i])
        {
            arr[k] = R[j];
            k++;
            j++;
        }

        if(R[j] == L[i])
        {
            arr[k] = L[i];
            i++;
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k] = L[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        arr[k] = R[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r - l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int n)
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
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Original Array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n);

    cout << "Sorted Array: ";
    printArray(arr, n);
}
