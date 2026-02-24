#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int size, int key)
{
    int beg = 0, end = size - 1, mid;
    
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        
        if (a[mid] == key)
        {
            return mid; // Return the index if found
        }
        else if (a[mid] < key)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    
    return -1; // Return -1 if not found
}

int main()
{
    int key;
    cout << "Enter the key: ";
    cin >> key;
    
    int a[] = {14, 20, 32, 34, 45}; // Sorted array
    int size = sizeof(a) / sizeof(a[0]);
    
    int index = binarySearch(a, size, key);
    
    if (index != -1)
    {
        cout << key << " is present at index " << index << ".";
    }
    else
    {
        cout << key << " is not present.";
    }
}
