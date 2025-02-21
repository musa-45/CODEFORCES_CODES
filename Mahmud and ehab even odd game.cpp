#include <iostream>

using namespace std;

// Function to count the number of ordinary numbers up to n
int countOrdinaryNumbers(int n) {
    int count = 0;

    for (int i = 1; i <= 9; i++) {
        long long ordinary = i;

        while (ordinary <= n) {
            count++;
            ordinary = ordinary * 10 + i;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Count the number of ordinary numbers up to n
        int result = countOrdinaryNumbers(n);

        cout << result << endl;
    }

    return 0;
}
