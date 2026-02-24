#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the values to be stored: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequencies
    int hash[13] = {0};  // Initialize hash array to 0
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of values to search for: " << endl;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        cout << "Frequency of " << number << " is: " << hash[number] << endl;
    }

    return 0;
}