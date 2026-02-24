#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>>& grid, long long &ans, long long sum, int a, int b)
{
    int n = grid.size();
    int m = grid[0].size();

    sum += grid[a][b];

    if(a == n - 1 && b == m - 1)
    {
        ans = max(ans, sum);
        return;
    }

    if(a+1 < n) backtrack(grid, ans, sum, a + 1, b);
    if(b+1< m) backtrack(grid, ans, sum, a, b + 1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> grid[i][j];
        }
    }

    long long ans = INT_MIN;
    backtrack(grid, ans, 0, 0, 0);

    cout << ans;
    return 0;
}
