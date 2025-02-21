#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, e,sc,des;
    cin>>v>>e;
    vector<int> adjList[v+1];

    for(int i=1;i<=e;i++)
    {
        cout<<"Edge "<<i<<": ";
        cin>>sc>>des;
        adjList[sc].push_back(des);
        adjList[des].push_back(sc);
    }

    // print
    for(int i=1;i<=v;i++)
    {
        cout<<i<<": ";
        for(auto j: adjList[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // BFS
    queue<int> q;
    vector<int> visited(v+1,0);
    int st=1;
    q.push(st); // 1. put the starting node into the queue
    visited[st] = 1;
    while(!q.empty()) // 2.
    {
        int f = q.front();
        cout<<f<<" "; // print the output
        q.pop(); // 3.
        for(auto j:adjList[f])
        {
            if(!visited[j])
            {
                q.push(j);
                visited[j] = 1;
            }
        }

    }







    return 0;
}
