#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    map<int, vector<int>> indices;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        indices[a[i]].push_back(i);
    }

    // Check if any number appears more than k times
    for (auto &pair : indices) {
        if (pair.second.size() > k) {
            cout << "NO" << endl;
            return 0;
        }
    }

    vector<int> colors(n);
    int color = 1;

    // Assign colors ensuring distinct values get unique colors
    for (auto &pair : indices) {
        for (int idx : pair.second) {
            colors[idx] = color;
            color = (color % k) + 1;  // Cycle through 1 to k
        }
    }

    cout << "YES" << endl;
    for (int c : colors) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
