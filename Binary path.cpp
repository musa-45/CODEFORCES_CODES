#include<bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string row1, row2;
    cin >> row1 >> row2;

    string result;
    vector<vector<long long>> dp(2, vector<long long>(n + 1, 0));

    dp[0][0] = dp[1][0] = 1;

    for (int j = 1; j <= n; j++) {
        if (row1[j - 1] == '0' && row2[j - 1] == '0') {
            dp[0][j] = dp[0][j - 1];
            dp[1][j] = dp[1][j - 1];
        } else if (row1[j - 1] == '1' && row2[j - 1] == '1') {
            dp[0][j] = dp[1][j - 1];
            dp[1][j] = dp[0][j - 1];
        } else {
            dp[0][j] = dp[0][j - 1] + dp[1][j - 1];
            dp[1][j] = dp[0][j - 1] + dp[1][j - 1];
        }
    }

    int i = 0, j = n;

    while (i < 2 && j > 0) {
        if (row1[j - 1] == '0' && row2[j - 1] == '0') {
            result += '0';
        } else if (row1[j - 1] == '1' && row2[j - 1] == '1') {
            result += '1';
            i = 1 - i; // switch rows
        } else {
            if (dp[i][j - 1] > 0) {
                result += '0';
            } else {
                result += '1';
                i = 1 - i; // switch rows
            }
        }
        j--;
    }

    reverse(result.begin(), result.end());

    cout << result << endl;
    cout << dp[0][n] + dp[1][n] << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

