#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    //precompute
    map<char, int> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++ ;
    }


    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        //fetch
        cout << mpp[c] << endl;

    }
}