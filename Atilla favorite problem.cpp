#include "bits/stdc++.h"
using namespace std;

using ll = long long;

#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()

void solve() {
    int n; string s; cin >> n >> s;
    sort(all(s));
    cout << s.back() - 'a' + 1 << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
