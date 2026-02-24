// You are using GCC
void initializeGraph(int graph[MAXN][MAXN], int n) {
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            graph[i][j] = 0;
            else
            graph[i][j] = INF;
        }
    }
}

void readEdges(int graph[MAXN][MAXN], int m) {
    for(int i=0; i<m; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u][v] = w;
    }
}

void floydWarshall(int graph[MAXN][MAXN], int n) {
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(graph[i][k] < INF && graph[k][j] < INF)
                {
                    if(graph[i][j] > graph[i][k] + graph[k][j])
                    {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
            }
        }
    }
}

void printResult(int graph[MAXN][MAXN], int source, int sink) {
    if(graph[source][sink] >= INF)
    {
        std::cout << "Nodes are unreachable. Maximum flow is 0." << std::endl;
    }
    else
    {
        std::cout << "Maximum flow from node " << source << " to " << sink << " is: " << graph[source][sink] << std::endl; 
    }
}