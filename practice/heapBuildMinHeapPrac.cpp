#include <bits/stdc++.h>
using namespace std;

void minHeapify(int arr[], int size, int i)
{
	int smallest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;

	if(left< size && arr[left] < arr[smallest])
	{
		smallest = left;
	}

	if(right< size && arr[right] < arr[smallest])
	{
		smallest = right;
	}

	if(smallest != i)
	{
		swap(arr[i], smallest);
		minHeapify(arr, size, smallest);
	}
}

void buildMinHeap(int arr[], int size)
{
	for(int i=size/2 - 1;  i>=0; i--)
	{
		minHeapify(arr, size, i);
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
	cout << "Enter the size of the heap: ";
	cin >> n;

	int arr[n];
	cout << "Enter the values to be entered in the heap: ";
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}

	buildMinHeap(arr, n);

	cout << "heap: ";
	printHeap(arr, n);

}