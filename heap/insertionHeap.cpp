#include <iostream>

using namespace std;

class MinHeap
{
public:
    int *arr;
    int capacity;
    int size;

    MinHeap(int cap)
    {
        size = 0;
        capacity = cap;
        arr = new int[cap];
    }

    void heapifyUp(int i)
    {
        while (i > 0)
        {
            int parent = (i - 1) / 2;
            if (arr[parent] > arr[i])
            {
                swap(arr[parent], arr[i]);
                i = parent;
            }
            else
            {
                break;
            }
        }
    }

    void heapifyDown(int i)
    {
        while (true)
        {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int smallest = i;

            if (left < size && arr[left] < arr[smallest])
                smallest = left;

            if (right < size && arr[right] < arr[smallest])
                smallest = right;

            if (smallest != i)
            {
                swap(arr[i], arr[smallest]);
                i = smallest;
            }
            else
            {
                break;
            }
        }
    }

    void insert(int value)
    {
        if (size == capacity)
        {
            cout << "The heap is full\n";
            return;
        }

        arr[size] = value;
        size++;
        heapifyUp(size - 1);
    }

    void deleteRoot()
    {
        if (size == 0)
        {
            cout << "The heap is empty\n";
            return;
        }

        arr[0] = arr[size - 1];
        size--;
        heapifyDown(0);
    }

    void printHeap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~MinHeap()
    {
        delete[] arr;
    }
};

int main()
{
    MinHeap h(10);
    
    for (int i = 10; i > 0; i--)
    {
        h.insert(i);
    }

    cout << "Heap elements: ";
    h.printHeap();
    return 0;
}
