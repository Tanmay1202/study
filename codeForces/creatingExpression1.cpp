#include <bits/stdc++.h>
using namespace std;



void backtrack(vector<int> nums, int target, int sum, int i, bool &flag)
{
    if(i == nums.size())
    {
        if(sum == target)
        flag = true;

        return;
    }

    backtrack(nums, target, sum+nums[i], i+1, flag);
    backtrack(nums, target, sum-nums[i], i+1, flag);


}

int main()
{
    int N;
    int X;
    bool flag = false;

    cin >> N >> X;

    vector<int> nums(N);

    for(int i=0; i<N; i++)
    {
        cin >> nums[i];
    }

    backtrack(nums, X, nums[0], 1, flag);

    flag == true ? cout << "YES" : cout << "NO";
    return 0;
}