#include<bits/stdc++.h>

using namespace std;

bool musa(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int prime(int n) {
    int next = n + 1;
    while (!musa(next)) {
        next++;
    }
    return next;
}

int main() {
    int n, m;
    cin >> n >> m;
    if (prime(n) == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
