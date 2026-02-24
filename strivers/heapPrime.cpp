// You are using GCC
#include <bits/stdc++.h>
using namespace std;
// void swap(int arr[], int a, int b) {
//     int temp = arr[a];
//     arr[a] = arr[b];
//     arr[b] = temp;
// }

void maxHeapify(int arr[], int n, int i) 
{
   int largest = i;
   int left = 2*i + 1;
   int right = 2*i + 2;
   
   if(left < n && arr[left] > arr[largest])
   largest = left;
   
   if(right < n && arr[right] > arr[largest])
   largest = right;
   
   if(i != largest)
   {
       swap(arr[i], arr[largest]);
       maxHeapify(arr, n, largest);
   }
}

void buildMaxHeap(int arr[], int n) 
{
   for(int i=n/2 - 1; i>=0; i--)
   {
       maxHeapify(arr, n, i);
   }
}

void insertIntoMaxHeap(int arr[], int *n, int value) 
{
    arr[*n] = value;
    int i = *n;
    (*n)++;
    
    int parent = (i-1)/2;
    
    while(i>0 && arr[parent] < arr[i])
    {
        swap(arr[i], arr[parent]);
        i = parent;
        parent = (i-1)/2;
    }
}

int isPrime(int num) 
{
    if(num<2)
    return false;
    
    
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i == 0)
        return false;
    }
    
    return true;
}

void printMaxHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[100];
    int n = 0; 
    int num_elements;

    cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        int value;
        cin >> value;

        if (isPrime(value)) {
            insertIntoMaxHeap(arr, &n, value);
        } else {
            cout << value << " is not a prime number" <<endl;
        }
    }

    buildMaxHeap(arr, n);
    cout << "Max Heap: ";
    printMaxHeap(arr, n);

    return 0;
}