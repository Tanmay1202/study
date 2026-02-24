#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    int pivot = -1;

    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }


    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            pivot = i;
            break;
        }
    }


    if(pivot == -1) pivot = n-1;


    int l = (pivot + 1)%n;
    int r = pivot; 

    while(l != r)
    {
        int sum = nums[l] + numr[r];

        if(sum == target) return true;

        else if(sum < target)
        l = (l + 1)%n;
        else
        r = (r - 1 + n)%n;
    }

    return false;
}