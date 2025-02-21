#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int>a(n) , b(n);
       for(auto &c : a) cin >> c;
       for(auto &c : b) cin >> c;
     int mn = *min_element (a.begin() ,a.end());
     int mx = *min_element(b.begin() ,b.end());

        long long ans = 0;

        for(int i = 0 ;i < n ; i++)
        {
            ans += max(a[i] - mn ,b[i] - mx );
        }
        cout << ans << endl;
    }
}
