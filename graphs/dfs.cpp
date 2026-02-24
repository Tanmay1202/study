#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to perform DFS traversal
    void dfs(int v, vector<int> adj[], 
             vector<int>& visited, 
             vector<int>& result) {

        //if visited, then backtrack
        if(visited[v])
        return;

        //mark the node arrived at as true
        visited[v] = true;
        
        //store the result
        result.push_back(v);

        //call the recursive function for all the adjacent nodes
        for(int i=0; i<adj[v].size(); i++)
        {
            dfs(adj[v][i], adj, visited, result);
        }

        return;
    }
};

int main() {
    // Number of vertices
    int V = 5;

    // Adjacency list
    vector<int> adj[V];
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    // Visited array
    vector<int> visited(V, 0);

    // Result vector
    vector<int> result;

    // Create object
    Solution sol;

    // Run DFS from node 0
    sol.dfs(0, adj, visited, result);

    // Print traversal
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}