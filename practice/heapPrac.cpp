#include <bits/stdc++.h>
using namespace std;
class minHeap
{
    public:
    int *arr;
    int capacity;
    int size;
    minHeap(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        size = 0;
    }

    void heapifyUp(int i)
    {
        int parent = (i-1)/2;
        while(i>0 && arr[parent] > arr[i])
        {
            swap(arr[parent], arr[i]);
            i = parent;
            parent = (i-1)/2;
        }
    }

    void insert(int val)
    {
        if(size == capacity)
        {
            cout << "The heap is full, no more insertions possible!!!" << endl;
            return;
        }
        arr[size] = val;
        heapifyUp(size);
        size++;

    }

    void heapifyDown(int i)
    {
        int left = 2*i + 1;
        int right = 2*i + 2;
        int smallest = i;
        if(left < size && arr[left] < arr[smallest])
        smallest = left;

        if(right < size && arr[right] < arr[smallest])
        smallest = right;

        if(smallest != i)
        {
            swap(arr[i], arr[smallest]);
            heapifyDown(smallest);
        }
    }

    void deleteRoot()
    {
        if(size == 0)
        {
            cout << "The heap is empty, nothing is empty!!!" << endl;
            return;
        }

        arr[0] = arr[size - 1];
        size--;
        heapifyDown(0);
    }

    void printHeap()
    {
        for(int i=0; i<size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    minHeap m(100);

    m.insert(78);
    m.insert(32);
    m.insert(38);
    m.insert(65);
    m.insert(42);

    cout << "minheap: ";
    m.printHeap();

    m.deleteRoot();

    cout << "minheap: ";
    m.printHeap();




}
	