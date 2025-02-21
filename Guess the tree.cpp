
#include<bits/stdc++.h>
using namespace std;

int query(int a,int b)
{

    cout << "? " << a << " " << b << endl;
    cout.flush();
    int res ;
    cin >> res;
    return res;
}

void musa(int n)
{
    vector<int> parent(n + 1, -1);
    vector<int> depth(n + 1 , 0);
    set<int> tree;

    tree.insert(1);
    for(int i = 2 ; i <= n ; i++)
    {

        int x = query(1,i);
        parent[i] = x;
        depth[i] = depth[x] + 1;
        tree.insert(i);
    }

    vector<pair<int, int>> edges;
    for(int i = 2 ; i<= n ; i++)
    {

        edges.push_back({i,parent[i]});
    }

    cout << "!";
    for(auto edge : edges)
    {

        cout << " " << edge.first << " " <<edge.second;
    }
    cout << endl;
    cout.flush();

}
int main()
{

    long long t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        musa(n);
    }
    return 0;
}
