#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the sequence: ";
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    vector<int> LIS(n, 1);
    vector<int> LDS(n, 1);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(nums[i] > nums[j])
            LIS[i] = max(LIS[i], LIS[j] + 1); 
        }
    }


    for(int i=n-1; i>=0; i--)
    {
        for(int j=n-1; j>i; j--)
        {
            if(nums[j] < nums[i])
            LDS[i] = max(LDS[i], LDS[j] + 1); 
        }
    }

    vector<int> LBS(n);

    for(int i=0; i<n; i++)
    {
        LBS[i] = LIS[i] + LDS[i] - 1;
    }


    cout << "The longest bitonic subsequence is: " << *max_element(LBS.begin(), LBS.end()) << endl;

    return 0;
}