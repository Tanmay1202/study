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

    int hash[26] = {0};
    for(int i=0; i<n; i++)
    {
        int z = arr[i] - 'a';
        hash[z] += 1;
    }

    int q; 
    cout << "Enter the number of queries: " << endl;
    cin >> q;
    
    while(q--)
    {
        char c;
        cin >> c;
        //cin >> q;
        int i = c - 'a';
        cout << "The frequency of " << c << " is : " << hash[i] << endl;
    }

    return 0;
}