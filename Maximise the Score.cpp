#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[2 * i + 1]; // Add min(x, y) to the score
        }

        cout << sum << endl;
    }

    return 0;
}
