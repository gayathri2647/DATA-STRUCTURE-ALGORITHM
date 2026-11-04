#include <iostream>
using namespace std;

class graph_traversal {
public:
    int n, adj_m[6][6], visited[6];

    void input() {
        cout << "Enter number of vertices (1-5): ";
        cin >> n;

        cout << "Enter adjacency matrix:\n";
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> adj_m[i][j];
    }

    void dfs() {
        if (n == 0) return;

        int stack[6], top = -1, start, pos;

        cout << "Enter starting position for DFS (1-n): ";
        cin >> start;

        for (int i = 1; i <= n; i++)
            visited[i] = 0;

        stack[++top] = start;
        cout << "DFS Traversal: ";

        while (top != -1) {
            pos = stack[top--];

            if (!visited[pos]) {
                cout << pos << "\t";
                visited[pos] = 1;

                for (int i = n; i >= 1; i--)
                    if (adj_m[pos][i] == 1 && !visited[i])
                        stack[++top] = i;
            }
        }
    }

    void bfs() {
        if (n == 0) return;

        int queue[6], front = 0, rear = 0, start, pos;

        cout << "Enter starting position for BFS (1-n): ";
        cin >> start;

        for (int i = 1; i <= n; i++)
            visited[i] = 0;

        queue[rear++] = start;
        visited[start] = 1;

        cout << "BFS Traversal: ";

        while (front < rear) {
            pos = queue[front++];
            cout << pos << "\t";

            for (int i = 1; i <= n; i++)
                if (adj_m[pos][i] == 1 && !visited[i]) {
                    queue[rear++] = i;
                    visited[i] = 1;
                }
        }
    }
};

int main() {
    graph_traversal gt;
    gt.input();
    gt.dfs();
    gt.bfs();
    return 0;
}
