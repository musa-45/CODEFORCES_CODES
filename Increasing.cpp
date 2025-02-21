#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int maxOperations = 0;

        for (int i = 0; i < n - 1; i++) {
            if ((s[i] == 'A' || s[i + 1] == 'B') && (s[i] == 'B' || s[i + 1] == 'A')) {
                maxOperations++;
                 // Skip the next character as we've performed the operation
            }
        }

        cout << maxOperations << endl;
    }

    return 0;
}
