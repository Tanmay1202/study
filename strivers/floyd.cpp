#include <bits/stdc++.h>
using namespace std;

#define MAX 10

void warshall(int graph[MAX][MAX], int n) {
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
}

int main() {
    int n;
    cin >> n;

    int graph[MAX][MAX];

    // Input relationship matrix
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> graph[i][j];

    // Compute transitive closure
    warshall(graph, n);

    // Find influential individual
    int influentialIndex = -1;

    for (int i = 0; i < n; ++i) {
        int rowCount = 0; // people this person follows
        int colCount = 0; // people who follow this person

        for (int j = 0; j < n; ++j) {
            if (graph[i][j] == 1) rowCount++;
            if (graph[j][i] == 1) colCount++;
        }

        if (colCount > rowCount) {
            influentialIndex = i;
            break;
        }
    }

    if (influentialIndex != -1)
        cout << "Influential Individual: " << influentialIndex << endl;
    else
        cout << "There is no influential individual in the group" << endl;

    return 0;
}
