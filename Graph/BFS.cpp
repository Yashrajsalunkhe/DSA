#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[100];
bool visited[100];

void bfs(int start)
{
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int neighbor : adj[node])
        {
            if(!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    adj[1].push_back(2);
    adj[1].push_back(3);

    adj[2].push_back(1);
    adj[2].push_back(4);

    adj[3].push_back(1);

    adj[4].push_back(2);

    bfs(1);

    return 0;
}