#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int sum_x = 0, sum_y = 0, count = 0;

    // Traverse the grid to find all '#' characters
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                sum_x += i + 1;  // convert 0-based to 1-based
                sum_y += j + 1;  // convert 0-based to 1-based
                ++count;
            }
        }
    }

    // Calculate the center
    int center_x = sum_x / count;
    int center_y = sum_y / count;

    cout << center_x << " " << center_y << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

