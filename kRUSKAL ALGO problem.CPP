#include<bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> edgelist, mst;
vector<int> parent;
int totalweight = 0;

bool sortByweight(tuple<int, int, int> u, tuple<int, int, int> v) {
    return (get<2>(u) < get<2>(v));
}

int findOp(int u) {
    if (parent[u] != -1) {
        return findOp(parent[u]);
    }
    return u;
}

void unionOp(int u, int v) {
    parent[v] = u;
}

void kruskal(int v, int e) {
    int i = 0, j = 0;
    while (i < v - 1 && j < e) {
        for (auto x : edgelist) {
            int sc = get<0>(x);
            int des = get<1>(x);
            int wt = get<2>(x);
            int arsc = findOp(sc);
            int ardes = findOp(des);

            if (arsc == ardes) {
                j++;
                continue;
            }
            unionOp(arsc, ardes);
            mst.push_back(x);
            totalweight += wt;  // Update total MST weight
            ++i;
            ++j;
        }
    }
}

void print() {
    cout << "Edges in the MST:\n";
    for (auto x : mst) {
        cout << get<0>(x) << " " << get<1>(x) << " " << get<2>(x) << endl;
    }
    cout << "Total weight of the MST: " << totalweight << endl;
}

int main() {
    int v, e, sc, des, wt;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    parent.resize(v, -1);

    // Input the edges (sc, des, wt)
    cout << "Enter the edges (source, destination, weight):" << endl;
    for (int i = 1; i <= e; i++) {
        cin >> sc >> des >> wt;
        edgelist.push_back(make_tuple(sc, des, wt));
    }

    sort(edgelist.begin(), edgelist.end(), sortByweight);

    kruskal(v, e);

    // Print MST and its total weight
    print();

    return 0;
}
