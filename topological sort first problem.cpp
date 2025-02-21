#include <bits/stdc++.h>
using namespace std;

vector<int> findOrder(int v, vector<pair<int, int>> com) {
    vector<vector<int>> adj(v + 1);
    vector<int> in_degree(v + 1, 0);

    // Build the graph
    for (auto& edge : com) {
        adj[edge.first].push_back(edge.second);
        in_degree[edge.second]++;
    }

    queue<int> q;

    // Initialize the queue with all nodes having in-degree 0
    for (int i = 1; i <= v; ++i) {
        if (in_degree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo_order;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo_order.push_back(node);

        // Reduce the in-degree of the neighbors
        for (int neighbor : adj[node]) {
            in_degree[neighbor]--;
            if (in_degree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Check if the topological sort includes all nodes
    if (topo_order.size() == v) {
        return topo_order;
    } else {
        return {}; // Return an empty vector to indicate "IMPOSSIBLE"
    }
}

int main() {
    int v, e;
    cin >> v >> e;

    vector<pair<int, int>> com;

    for (int i = 0; i < e; ++i) {
        int a, b;
        cin >> a >> b;
        com.emplace_back(a, b);
    }

    vector<int> order = findOrder(v, com);

    if (order.empty()) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        for (int course : order) {
            cout << course << " ";
        }
        cout << endl;
    }

    return 0;
}
