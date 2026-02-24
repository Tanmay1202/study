#include <bits/stdc++.h>

using namespace std;
// using vi = vector<int>;

int countSum(int n)
{
    int sum = 0;
    while(n>0)
    {
        int rem = n%10;
        sum += rem;
        n /= 10;
    }

    return sum;
}

bool possible(int n, int x)
{
    int sum = countSum(n);
    return  n == x + sum;
}

void solve() {
    int n;
    cin >> n;
    int cnt = 0;

    for(int i=1; i<=100; i++)
    {
        if(possible(n+i, n))
        cnt++;
    }

    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}