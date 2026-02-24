// You are using GCC
#include <bits/stdc++.h>
using namespace std;

void minHeapify(int arr[], int size, int i)
{
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left < size && arr[smallest]>arr[left])
    smallest = left;
    
    if(right < size && arr[smallest]>arr[right])
    smallest = right;
    
    if(smallest != i)
    {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, size, smallest);
    }
}

void buildMinHeap(int arr[], int size)
{
    for(int i=size/2 - 1; i>=0; i--)
    {
        minHeapify(arr, size, i);
    }
}

void insert(int arr[], int &size, int val)
{
    arr[size] = val;
    int i=size;
    size++;
    
    int parent = (i-1)/2;
    
    while(i>0 && arr[parent]>arr[i])
    {
        swap(arr[i], arr[parent]);
        i = parent;
        parent = (i-1)/2;
    }
}

void deleteNode(int arr[], int &n)
{
    swap(arr[0], arr[n-1]);
    n--;
    minHeapify(arr, n, 0);
    
}

void calculateSumAverage(int arr[], int size, int &sum, double&avg)
{
    sum = 0;
    avg = 0;
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];
    }
    
    avg = (double)sum/size;
    
}

int calculateMax(int arr[], int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    
    return max;
}


void print(int arr[], int size)
{
    cout << "Min Heap: ";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int n;
    cin >> n;
    int size = 0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        insert(arr, size, arr[i]);
    }
    
    buildMinHeap(arr, n);
    int sum;
    double avg;
    
    
    print(arr, n);
    
    cout << "Root node: " << arr[0] << endl;
    cout << "Maximum value: " << calculateMax(arr, n) << endl;
    
    
    deleteNode(arr, n);
    calculateSumAverage(arr, n, sum, avg);
    
    cout << "Sum of nodes: " << sum   << endl;
    
    cout << "Average of nodes: " << fixed << setprecision(2) << avg <<endl;
    
    
}