#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0, count_1 = 0, count_2 = 0;

        for (int i = 0; i < n; i++) {
            int weight;
            cin >> weight;
            sum += weight;
            if (weight == 1) {
                count_1++;
            } else {
                count_2++;
            }
        }

        if (sum % 2 == 0 && ((count_1 % 2 == 0 && count_2 % 2 == 0)|| (count_1 > 0 && count_2 > 0))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

