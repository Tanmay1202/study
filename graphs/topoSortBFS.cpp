#include <bits/stdc++.h>
using namespace std;

// Creating a class named Solution
class Solution {
public:
    // Function to perform BFS-based Topological Sort
    vector<int> topologicalSort(int V, vector<vector<int>> adj) 
    {
        vector<int> inDegree(V, 0);

        for(int i=0; i<V; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                inDegree[adj[i][j]]++;
            }
        }


        queue<int> q;

        for(int i=0; i<inDegree.size(); i++)
        {
            if(inDegree[i] == 0)
            q.push(i);
        }
        
        vector<int> topo;

        while(!q.empty())
        {
            int front = q.front();
            q.pop();

            topo.push_back(front);

            for(int i=0; i<adj[front].size(); i++)
            {
                inDegree[adj[front][i]]--;

                if(inDegree[adj[front][i]] == 0)
                q.push(adj[front][i]);
            }
        }

        return topo;
    }
};

// Driver code
int main() {
    // Number of vertices and edges
    int V = 6, E = 6;
    
    // Creating adjacency list
    vector<vector<int>> adj(V);
    
    // Adding edges
    adj[5].push_back(0);
    adj[5].push_back(2);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);
    
    // Creating Solution object
    Solution obj;
    
    // Getting the topological sort result
    vector<int> ans = obj.topologicalSort(V, adj);
    
    // Printing the result
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
    
    return 0;
}
