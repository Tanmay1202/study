#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++)
    {
        while(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i+1;

}


void quickSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, high, pi+1);

    }
}

void display(int arr[], int s)
{
    for(int i=0; i<s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout<<"Enter the no. of elements";
    cin >> n;
    int size;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    size = sizeof(arr)/sizeof(arr[0]);
    //int arr[n];
    cout << "Array before sorting";
    display(arr, size);
    quickSort(arr, 0, size);
    cout << "Array after sorting";
    display(arr, size);
    
}