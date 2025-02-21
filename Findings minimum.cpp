#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;


    int totalCost = k * (w * (w + 1) / 2);

    int b = max(0, totalCost - n);

    cout << b << endl;

    return 0;
}
