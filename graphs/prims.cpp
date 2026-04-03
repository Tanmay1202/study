#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int sum = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<bool> visited(V, false);

        pq.push(make_pair(0, 0)); // {weight, node}

        while (!pq.empty())
        {
            pair<int, int> p = pq.top();
            pq.pop();

            int wt = p.first;
            int node = p.second;

            if (visited[node]) continue;

            visited[node] = true;
            sum += wt;

            for (auto it : adj[node])
            {
                int adjNode = it[0];
                int edgeWt = it[1];

                if (!visited[adjNode])
                {
                    pq.push(make_pair(edgeWt, adjNode));
                }
            }
        }

        return sum;
    }
};

int main()
{
    int V = 5;
    vector<vector<int>> edges = {
        {0, 1, 2},
        {0, 2, 1},
        {1, 2, 1},
        {2, 3, 2},
        {3, 4, 1},
        {4, 2, 2}
    };

    vector<vector<int>> adj[V];

    for (auto it : edges)
    {
        vector<int> tmp(2);

        tmp[0] = it[1]; // neighbor
        tmp[1] = it[2]; // weight
        adj[it[0]].push_back(tmp);

        tmp[0] = it[0];
        tmp[1] = it[2];
        adj[it[1]].push_back(tmp);
    }

    Solution obj;
    int sum = obj.spanningTree(V, adj);

    cout << "The sum of all the edge weights: " << sum << endl;

    return 0;
}
