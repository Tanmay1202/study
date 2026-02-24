#include <bits/stdc++.h>
using namespace std;

class Dist 
{
public:
    int k, m;

    Dist() 
    {
        k = 0;
        m = 0;
    }

    void get_data()
    {
        cin >> k >> m;
    }

    operator int()
    {
        int dist = k * 1000 + m;
        return dist;
    }
};

int main()
{
    int x;
    Dist D1; 
    cout << "Enter the number of meters and kilometers: ";
    D1.get_data();
    x = D1; 
    cout << "\nTotal Distance in meters: " << x << endl;

    return 0;
}
