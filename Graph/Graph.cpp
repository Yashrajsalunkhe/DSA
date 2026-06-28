#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> adj[5];

    adj[1].push_back(2);
    adj[2].push_back(1);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    adj[3].push_back(4);
    adj[4].push_back(3);

    for(int i=1;i<=4;i++)
    {
        cout<<"Node "<<i<<" : ";

        for(int x : adj[i])
        {
            cout<<x<<" ";
        }

        cout<<endl;
    }
}