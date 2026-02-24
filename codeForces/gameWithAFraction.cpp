#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long p, q;
    cin >> p >> q;

    if(3LL*p >= 2LL*q && p < q)
    {
        cout << "Bob\n";
    }
    else
    {
        cout << "Alice\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)  solve();
}