#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];
bool visited[100];

void dfs(int node){

    visited[node] = true;

    cout << node << " ";

    for(int neighbor : adj[node])
    {
        if(!visited[neighbor])
        {
            dfs(neighbor);
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

    dfs(1);

    return 0;
}