#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        //visited vector to avoid revisiting.
        vector<bool> visited(V);
        visited[0] = true;

        //queue to store the adjacent nodes
        queue<int> q;
        q.push(0);

        //vector to store the bfs traversal
        vector<int> bfs;
        
        while(!q.empty())
        {
            int front = q.front();
            q.pop();
            bfs.push_back(front);

            for(int i=0; i<adj[front].size(); i++)
            {
                if(!visited[adj[front][i]])
                {
                    q.push(adj[front][i]);
                    visited[adj[front][i]] = true;
                }
            }
        }

        return bfs;

    }
};

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    vector <int> adj[6];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    Solution obj;
    vector <int> ans = obj.bfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}
