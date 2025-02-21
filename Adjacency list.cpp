#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,e;
    cout<<"Number of vertices and edges: ";
    cin>>v>>e;
    vector<int> adjList[v];


    // input edges
    int sc,des;

    for(int i=1;i<=e;i++)
    {
        cout<<"Input edge "<<i<<":";
        cin>>sc>>des;
        adjList[sc].push_back(des);
        adjList[des].push_back(sc);
    }

    // print

    for(int i=0;i<v;i++)
    {
        cout<<i<<":";
        for(auto j:adjList[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}
