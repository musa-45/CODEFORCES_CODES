#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int* pass = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> pass[i];
    }

    int Count = 0;
    int cnt = pass[k - 1];

    for (int i = 0; i < n; ++i) {
        if (pass[i] >= cnt && pass[i] > 0) {
            Count;
        }
    }

    cout << Count << endl;

    delete[] pass;
    return 0;
}
