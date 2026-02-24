#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the shortest path from source to all vertices
    vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) {
        //create an adjacency list for graphs representation
        vector<vector<int>> adj(N);

        for(auto it: edges)
        {
            adj[it[1]].push_back(it[0]);
            adj[it[0]].push_back(it[1]);
        }

        //create a distance vector to store all the distance
        //initialize each element to 1e9
        vector<int> dist(N, 1e9);

        dist[src] = 0;

        //create a queue to store the levels
        queue<int> q;
        q.push(src);

        //apply the breadth first search algorithm
        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            for(auto it: adj[node])
            {
                //if reaching the neighbour through current node is shorter, then take this path.
                //and push the neighbour back into the queue, since this is the shorter way.
                if(dist[node] + 1 < dist[it])
                {
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }

        //create an ans vector and push all the reachable nodes' shortest distances from the source
        vector<int> ans(N, -1);

        for(int i=0; i<N; i++)
        {
            if(dist[i] != 1e9)
            ans[i] = dist[i];
        }

        return ans;
    }
};

// Driver code
int main() {

    // Number of vertices and edges
    int N = 9, M = 10;

    // Edge list representing the undirected graph
    vector<vector<int>> edges = {
        {0, 1}, {0, 3}, {3, 4}, {4, 5}, {5, 6},
        {1, 2}, {2, 6}, {6, 7}, {7, 8}, {6, 8}
    };

    // Create object of Solution class
    Solution obj;

    // Call the shortestPath function with source as node 0
    vector<int> ans = obj.shortestPath(edges, N, M, 0);

    // Print the shortest distances from source to each node
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

