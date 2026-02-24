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
        int parent = (i - 1) / 2;
        while (i > 0 && arr[parent] > arr[i]) // Fixed condition (i > 0)
        {
            swap(arr[parent], arr[i]);
            i = parent;
            parent = (i - 1) / 2;
        }
    }

    void heapifyDown(int i)
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
            swap(arr[i], arr[smallest]); // Fixed swapping order
            heapifyDown(smallest);
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
        heapifyUp(size); // Fixed incorrect index
        size++;
    }

    void deleteRoot()
    {
        if (size == 0)
        {
            cout << "The heap is empty\n";
            return;
        }

        if (size == 1) // Fix: Handle case when only one element is present
        {
            size--;
            return;
        }

        arr[0] = arr[size - 1]; // Replace root with last element
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

    ~MinHeap() // Destructor to free allocated memory
    {
        delete[] arr;
    }
};

int main()
{
    MinHeap h(100);
    for (int i = 10; i > 0; i--)
    {
        h.insert(i);
    }

    cout << "Heap Elements: ";
    h.printHeap();

    h.deleteRoot();
    cout << "Heap elements after deletion: ";
    h.printHeap();

    return 0;
}
