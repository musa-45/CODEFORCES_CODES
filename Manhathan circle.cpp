#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int sum_x = 0, sum_y = 0, count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                sum_x += i + 1;
                sum_y += j + 1;
                ++count;
            }
        }
    }


    int center_x = sum_x / count;
    int center_y = sum_y / count;

    cout << center_x << " " << center_y << endl;
}

int main() {


    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
