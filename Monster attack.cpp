#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n , k;

    cin >> n >> k;

    vector<int > a(n) , b(n);
    for(auto &i: a) cin >> i;
    vector<int> right(n+1 , 0);
    for(int i = 0 ; i <n ; i++)
    {
        cin >> b[i];

        right[abs(b[i])] += a[i];
    }
    int c =  k;

    for(int i = 1 ; i <= n ; i++ )
    {
        if(c < right[i])
        {
            cout << "NO" << endl;
            return;
        }
        c -= right[i];
        c += k;
    }
    cout << "YES" << endl;
}
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

