
#include <iostream>
using namespace std;

class graph_traversal
{
public:
    int n, adj_m[6][6], visited[6];

    void input()
    {
        int i, j;

        cout << "Enter the no. of vertices for the graph (1-5): ";
        cin >> n;

        if (n < 1 || n > 5)
        {
            cout << "Invalid number of vertices.";
            n = 0;
            return;
        }

        cout << "Create the graph using adjacency matrix:\n";

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cin >> adj_m[i][j];
            }
        }
    }

    void dfs()
    {
        if (n == 0)
            return;

        int stack[6], top = -1, position, i, start;

        cout << "Enter the starting position for DFS: ";
        cin >> start;

        if (start < 1 || start > n)
        {
            cout << "Invalid starting position.\n";
            return;
        }

        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }

        top++;
        stack[top] = start;

        cout << "DFS Traversal: ";

        while (top != -1)
        {
            position = stack[top];
            top--;

            if (visited[position] == 0)
            {
                cout << position << "\t";
                visited[position] = 1;

                for (i = n; i >= 1; i--)
                {
                    if (adj_m[position][i] == 1 &&
                        visited[i] == 0)
                    {
                        top++;
                        stack[top] = i;
                    }
                }
            }
        }
        cout << endl;
    }

    void bfs()
    {
        if (n == 0)
            return;

        int queue[6], front = -1, rear = -1;
        int position, i, start;

        cout << "Enter the starting position for BFS: ";
        cin >> start;

        if (start < 1 || start > n)
        {
            cout << "Invalid starting position.\n";
            return;
        }

        for (i = 1; i <= n; i++)
        {
            visited[i] = 0;
        }

        rear++;
        queue[rear] = start;
        front = 0;

        visited[start] = 1;

        cout << "BFS Traversal: ";

        while (front <= rear)
        {
            position = queue[front];
            front++;

            cout << position << "\t";

            for (i = 1; i <= n; i++)
            {
                if (adj_m[position][i] == 1 &&
                    visited[i] == 0)
                {
                    rear++;
                    queue[rear] = i;
                    visited[i] = 1;
                }
            }
        }
        cout << endl;
    }
};

int main()
{
    graph_traversal gt;

    gt.input();
    gt.dfs();
    gt.bfs();

    return 0;
}
