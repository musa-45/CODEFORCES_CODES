#include<bits/stdc++.h>
using namespace std;

int digit(int num) {
    int  sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int  n;
        cin >> n;

        int result = 0;
        for (int i = 1; i <= n; ++i) {
            result += digit(i);
        }

        cout << result << endl;
    }

    return 0;
}


