#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;

    int a = 1;  // First term of the AP

    int d = 3;  // Common difference of the AP

    

    cin >> t;  // Input the number of test cases

    

    while(t--) {  // Loop through each test case

        int k;

        cin >> k;  // Input the value to check



        // Check if k lies in the AP

        if ((k - a) % d == 0 && (k - a) / d >= 0) {

            cout << "YES\n";  // Output YES if k lies in the AP, followed by a newline

        } else {

            cout << "NO\n";  // Output NO if k does not lie in the AP, followed by a newline

        }

    }

    

    return 0;

}