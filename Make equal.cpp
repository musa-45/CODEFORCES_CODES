#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int k = sum / n;
        bool possible = true;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] < k) {
                possible = false;
                break;
            } else {
                a[i + 1] += a[i] - k;
                a[i] = k;
            }
        }

        if (possible && a.back() == k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
