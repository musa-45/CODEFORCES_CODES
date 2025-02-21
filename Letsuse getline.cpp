#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int min_val = 1, max_val = 1e9;

        for (int i = 0; i < n; ++i)
            {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                min_val = max(min_val, x);
            } else if (a == 2) {
                max_val = min(max_val, x - 1);
            }
        }

        int answer = max(0, max_val - min_val + 1);
        cout << answer << endl;
    }

    return 0;
}
