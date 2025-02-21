#include <bits/stdc++.h>
using namespace std;

void solve(int T, int f, int d)
{
    int res = 0;

    for (int i = 0; i < f; ++i)
    {
        int m, n;
        cin >> m >> n;

        int diff = max(m, n);

        int cnt = (m + n + diff - 1) / diff;

        res += cnt;
    }

    cout << "Case " << T << ": " << res << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int f, d;
        cin >> f >> d;
        solve(i, f, d);
    }
    return 0;
}
