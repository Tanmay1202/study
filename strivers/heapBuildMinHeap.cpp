#include <bits/stdc++.h>
using namespace std;

// MinHeapify function (already implemented)
void MinHeapify(int arr[], int size, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int smallest = i;

    if (left < size && arr[left] < arr[smallest]) {
        smallest = left;
    }

    if (right < size && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        MinHeapify(arr, size, smallest);
    }
}

// Build the Min Heap (already implemented)
void buildMinHeap(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--) {
        MinHeapify(arr, size, i);
    }
}


void deleteFromMaxHeap(int arr[], int &n) {
    if (n <= 0) {
        cout << "Heap is empty" << endl;
        return;
    }
    if (n == 1) {
        n--;
        return;
    }
    // Swap the element to be deleted with the last element
    int index = 0; // Index of the root element to be deleted
    swap(arr[index], arr[n - 1]); // Swap the root with the last element    
    n--; // Decrease the size of the heap
    MinHeapify(arr, n, index); // Restore the heap property
}

// Function to perform Heap Sort
void heapsort(int arr[], int size)
{
    // Build a min-heap
    buildMinHeap(arr, size);

    // Extract elements one by one from the min-heap
    for (int i = size - 1; i >= 1; i--) {
        // Swap the root (min element) with the last element
        swap(arr[0], arr[i]);

        // Apply MinHeapify to restore the heap property for the reduced heap
        MinHeapify(arr, i, 0);
    }
}

// Function to print the array
void printHeap(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {32, 45, 1, 65, 77};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printHeap(arr, size);

    heapsort(arr, size);  // Call heapsort to sort the array

    cout << "Sorted Array: ";
    printHeap(arr, size);

    return 0;
}
