#include <bits/stdc++.h>
using namespace std;

// Class containing the solution logic
class Solution {
public:
    // Function to perform DFS
    void dfs(int node, vector<int> &adj[], vector<int> &st, vector<int>& vis) 
    {
        //mark the node as visited;
        vis[node] = true;
        
        //traverse the neighbouring nodes
        for(int i=adj[node]; i<adj[node].size(); i++)
        {
            //explore all the unvisited neighbours
            if(!vis[adj[node][i]])
            {
                dfs(adj[node][i], adj, st, vis);
            }
        }   

        //add the node to the path
        st.push(node);

    }

    // Function to perform Topological Sort
    vector<int> topoSort(int V, vector<int> adj[]) {
        //visited array to mark nodes as visited
        vector<bool> vis(V, false);

        //use a stack to preserve the topo sort order
        stack<int> st;

        //call dfs for unvisited nodes
        for(int i=0; i<V; i++)
        {
            if(!vis(i))
            {
                dfs(i, adj, st, vis);
            }
        }

        //vector to store the order
        vector<int> ans;

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};

// Driver code
int main() {
    // Number of vertices and edges
    int V = 6, E = 6;

    // Adjacency list representation of the graph
    vector<int> adj[V];
    adj[5].push_back(0);
    adj[5].push_back(2);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    // Create an object of Solution
    Solution obj;

    // Get the topological order
    vector<int> res = obj.topoSort(V, adj);

    // Print the result
    cout << "Topological Sort: ";
    for (auto it : res) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
