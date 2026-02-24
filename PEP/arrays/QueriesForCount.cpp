#include <bits/stdc++.h>
using namespace std;


vector<int> countElementsInRange(const vector<vector<int>>& queries, const vector<int>& arr) {
    int n = arr.size();
    vector<int> result;

    for (const auto& query : queries) {
        int x = query[0];
        int y = query[1];

        // Find first index >= x
        int low = 0, high = n-1, lower = n;

        while(low <= high)
        {
            int mid = low + (high-low)/2;

            if(arr[mid] >= x)
            {
                lower = mid;
                high = mid - 1;
            }
            else
            {
                low = mid+1;
            }
        }

        
        low = 0;
        high = n-1;
        int higher = -1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(arr[mid] <= y)
            {
                higher = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }

        result.push_back(max(0, higher - lower + 1));
    }

    return result;
}

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // Sort for binary search

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    vector<vector<int>> queries;
    cout << "Enter each query as two space-separated numbers (x y):\n";
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        queries.push_back({x, y});
    }

    vector<int> res = countElementsInRange(queries, arr);

    cout << "Results:\n";
    for (int r : res) {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}
