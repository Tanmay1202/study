#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to implement Dijkstra's Algorithm
    vector<int> dijkstra(int V, vector<vector<pair<int,int>>>& adj, int src) {
        vector<int> dist(V, 1e9);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        dist[src] = 0;

        pq.push({0, src});

        while(!pq.empty())
        {
            auto it = pq.top();
            int d = it.first;
            int node = it.second;

            pq.pop();

            if(d > dist[node])
            continue;

            for(auto it: adj[node])
            {
                int nxt = it.first;
                int wt = it.second;

                if(d + wt < dist[nxt])
                {
                    dist[nxt] = d + wt;
                    pq.push({dist[nxt], nxt});
                }
            }
        }


        return dist;


    }
};

int main() {
    // Number of vertices
    int V = 5;

    // Adjacency list {neighbor, weight}
    vector<vector<pair<int,int>>> adj(V);

    // Example edges
    adj[0].push_back({1, 2});
    adj[0].push_back({2, 4});
    adj[1].push_back({2, 1});
    adj[1].push_back({3, 7});
    adj[2].push_back({4, 3});
    adj[3].push_back({4, 2});

    // Run algorithm
    Solution obj;
    vector<int> dist = obj.dijkstra(V, adj, 0);

    // Print shortest distances
    for (int i = 0; i < V; i++) {
        cout << "Distance from 0 to " << i << " = " << dist[i] << endl;
    }
}
