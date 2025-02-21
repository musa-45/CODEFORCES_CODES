#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        bool hasOdd = false;

        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            sum += num;

            if (num % 2 != 0) {
                hasOdd = true;
            }
        }

        // Check if it is possible to obtain an array with an odd sum
        if (sum % 2 != 0 || (hasOdd && sum % 2 == 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
