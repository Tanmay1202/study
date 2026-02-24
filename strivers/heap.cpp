#include <bits/stdc++.h>
using namespace std;

class Heap
{
    public: 
    int *arr;
    int size;
    int capacity;

    Heap(int cap)
    {
        capacity = cap;
        size = 0;
        arr = new int[capacity];
    }

    void heapifyUp(int i)
    {
        int parent = (i-1)/2;
        while(i>0 && arr[parent] > arr[i])
        {
            swap(arr[i], arr[parent]);
            i = parent;
            parent = (i-1)/2;
        }
    }

    void insert(int val)
    {
        if(size == capacity)
        {
            cout << "heap is full";
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

        if(left < size && arr[smallest]  < arr[left])
        {
            smallest = left;
        }

        if(right < size && arr[smallest]  > arr[right])
        {
            smallest = left;
        }

        if(smallest != i)
        {
            swap(arr[smallest], arr[i]);
            heapifyDown(smallest);
        }
    }

    void deleteRoot()
    {
        if(size == 0)
        {
            cout << "The heap is empty, nothing to delete :( )";
            return;
        }

        arr[0] = arr[size - 1];
        size--;
        heapifyDown(0);
    }

    void print()
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
    Heap h(100);

    for(int i=10; i>0; i--)
    {
        h.insert(i);
    }

    h.print();

    h.deleteRoot();

    h.print();


}