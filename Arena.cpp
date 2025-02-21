#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int b = *min_element(v.begin(), v.end());

        cout << n - count_if(v.begin(), v.end(), [b](int x) { return x == b; }) <<endl;
    }

    return 0;
}
