
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int v,e,sc,des,st_node;
    cin>>v>>e;
    vector<int> adjList[v];

    for(int i=1;i<=e;i++)
    {
        cout<<"Insert edge "<<i<<":";
        cin>>sc>>des;
        adjList[sc].push_back(des);
        adjList[des].push_back(sc);
    }

    //print
    for(int i=0;i<v;i++)
    {
        cout<<i<<":";
        for(auto j:adjList[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // DFS

    stack<int> st;
    vector<int> visited(v,0);

    st_node = 0;
    st.push(st_node); // step 1
    visited[st_node] = 1; // step 2

    while(!st.empty()) // step 3
    {
        int d = st.top(); // step 4
        cout<<d<<" ";
        st.pop();         // step 5
        for(auto j:adjList[d])
        {
            if(!visited[j])
            {
                st.push(j);
                visited[j] = 1;
            }
        }
    }
    return 0;
}
