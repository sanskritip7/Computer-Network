#include <iostream>
using namespace std;

#define MAX 10
#define INF 10000

int main()
{
    int cost[MAX][MAX], distance[MAX], visited[MAX];
    int nodes, source, i, j, count, current = 0, next, min;
    int predecessor[MAX];

    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter cost matrix (0 if no edge):\n";
    for (i = 0; i < nodes; i++)
    {
        for (j = 0; j < nodes; j++)
        {
            cin >> cost[i][j];

            if (i != j && cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    cout << "Enter source node (1 to " << nodes << "): ";
    cin >> source;
    source--;

    for (i = 0; i < nodes; i++)
    {
        distance[i] = cost[source][i];
        visited[i] = 0;
        predecessor[i] = source;
    }

    distance[source] = 0;
    visited[source] = 1;

    for (count = 1; count < nodes; count++)
    {
        min = INF;

        for (i = 0; i < nodes; i++)
        {
            if (!visited[i] && distance[i] < min)
            {
                min = distance[i];
                current = i;
            }
        }

        visited[current] = 1;

        for (next = 0; next < nodes; next++)
        {
            if (!visited[next] &&
                distance[current] + cost[current][next] < distance[next])
            {
                distance[next] = distance[current] + cost[current][next];
                predecessor[next] = current;
            }
        }
    }

    cout << "\nShortest distances from node " << source + 1 << ":\n";

    for (i = 0; i < nodes; i++)
        cout << "To node " << i + 1 << " = " << distance[i] << endl;

    return 0;
}