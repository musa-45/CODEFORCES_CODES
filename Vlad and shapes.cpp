#include <iostream>

const int MOD = 1e9 + 7;
const int digitSums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int sumOfSumOfDigits(int n) {
    // Handle single-digit cases efficiently
    if (n < 10) {
        return n;
    }

    // Calculate number of digits using bit manipulation
    int numDigits = 0, temp = n;
    while (temp) {
        numDigits++;
        temp >>= 1;
    }

    // Calculate contribution of first (numDigits - 1) digits
    long long firstDigits = (n / 10) * (numDigits - 1) * 9 % MOD;

    // Calculate contribution of last digit using precomputed sum
    int lastDigit = n % 10;

    // Combine contributions and handle potential carry-over
    return (firstDigits + digitSums[lastDigit]) % MOD;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << sumOfSumOfDigits(n) << endl;
    }

    return 0;
}
