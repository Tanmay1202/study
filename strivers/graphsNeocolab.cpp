#include <iostream>
#include <climits>
using namespace std;

void add_edge(int adj[][100], int src, int dest)
{
    adj[src][dest] = 1;
    adj[dest][src] = 1; // For undirected graph
}

void BFS(int adj[][100], int start, int v)
{
    bool visited[100] = {false};
    int queue[100];
    int front = 0, rear = -1;

    visited[start] = true;
    queue[++rear] = start;

    cout << "BFS traversal starting from vertex " << start << ": ";

    while (front <= rear)
    {
        int u = queue[front++];
        cout << u << " ";

        for (int i = 0; i < v; i++)
        {
            if (adj[u][i] == 1 && !visited[i])
            {
                visited[i] = true;
                queue[++rear] = i;
            }
        }
    }

    cout << endl;
}

int main()
{
    int v, e;
    cin >> v;

    int adj[100][100] = {0};

    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int src, dest;
        cin >> src >> dest;
        add_edge(adj, src, dest);
    }

    int start;
    cin >> start;

    BFS(adj, start, v);

    return 0;
}
