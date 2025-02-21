#include <iostream>
using namespace std;
int main()
{
    int v,e;
    cout<<"Number of vertices and edges: ";
    cin>>v>>e;
    int adjList[v][v];

    // Initial Setup
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            adjList[i][j] = 0;
        }
    }

    // input edges
    int sc,des;

    for(int i=1;i<=e;i++)
    {
        cout<<"Input edge "<<i<<":";
        cin>>sc>>des;
        adjList[sc][des] = 1;
    }

    // print

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
