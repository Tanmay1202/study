#include <bits/stdc++.h>
using namespace std;

vector<int> best;

void printLIS(vector<int> &nums, int index, int prevIndex, vector<int> &ans)
{
    if(index == nums.size())
    {
        if(ans.size() > best.size())
        best = ans;
        return;
    }

    // if(flags[index] == true)
    // return;

    //skip
    // flags[index] = true;
    printLIS(nums, index + 1, prevIndex, ans);

    //take

    if(prevIndex == -1 || nums[index] > nums[prevIndex])
    {
        //flags[index] = true;
        ans.push_back(nums[index]);
        printLIS(nums, index + 1, index, ans);
        ans.pop_back();
    }


}


int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    vector<int> ans;

    cout << "Enter elements in the array: ";

    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    cout << endl;

    printLIS(nums, 0, -1, ans);

    cout << "The longest increasing subsequence is: ";

    for(int i=0; i<best.size(); i++)
    {
        cout << best[i] << " ";
    }
    

    return 0;
}