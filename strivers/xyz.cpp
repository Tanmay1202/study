// You are using GCC
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class PriorityQueue {
private:
    int arr[MAX_SIZE];
    int priorities[MAX_SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    bool isEmpty() {
        return (size == 0);
    }

    bool isFull() {
        return (size == MAX_SIZE);
    }

    void enqueue(int element, int priority)
    {
        if(isFull())
        {
            return;
        }

        
        priorities[element] = priority;
        if(size == 0)
        {
            arr[0] = element;
            size++;
            return;
        }
        
        
        int pos = 0;
        for(int i=0; i<size; i++)
        {
            if(priority > priorities[arr[i]])
            {
                pos = i;
                break;
            }
        }
        
        for(int i=size; i>pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = element;
        size++;
        
    }
    
    void dequeue() 
    {
        if(isEmpty())
        {
            return;
        }
        for(int i=0; i<size-1; i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
    }

    void printPriorityQueue()
    {
        cout << "Priority Queue: ";
        for(int i=0; i<size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int element, priority;
        cin >> element;
        cin >> priority;
        pq.enqueue(element, priority);
    }

    pq.printPriorityQueue();

    pq.dequeue();

    pq.printPriorityQueue();

    return 0;
}