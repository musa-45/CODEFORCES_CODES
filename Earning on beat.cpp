#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int num1 = 1;

        for (auto &v : arr) {
            int num2 = __gcd(num1, v);
            num2 = v / num2;
            num1 *= num2;
        }

        int sum = 0;
        vector<int> ans;

        for (auto &v : arr) {
            sum += num1 / v;
            ans.push_back(num1 / v);
        }

        if (sum >= num1) {
            cout << -1 << endl;
        } else {
            for (auto &v : ans) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
