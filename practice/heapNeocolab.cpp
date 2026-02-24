// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left<size && arr[largest]<arr[left])
    {
        largest = left;
    }
    
    if(right < size && arr[largest]<arr[right])
    {
        largest = right;
    }
    
    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, size, largest);
    }
}

void buildMaxHeap(int arr[], int size)
{
    for(int i=size/2 - 1; i>=0; i--)
    {
        maxHeapify(arr, size, i);
    }
}


void insert(int arr[], int &size, int val)
{
    arr[size] = val;
    int i = size;
    size++;
    
    int parent = (i-1)/2;
    
    while(i>0 && arr[parent] < arr[i])
    {
        swap(arr[parent], arr[i]);
        i = parent;
        parent = (i-1)/2;
    }
}

void printHeap(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    int size = 0;
    
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
        insert(arr, size, arr[i]);
    }
    
    buildMaxHeap(arr, size);
    
    printHeap(arr, size);
}