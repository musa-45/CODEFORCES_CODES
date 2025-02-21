#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n ;
        string s;
        cin >> s;

        long long cnt = 0;
        long long cnt2 =0;

        for(int i = 0 ; i < n ; i++)
        {
            cnt += s[i] == '0';
            cnt2 += s[i] == '1';
        }
        long long res = 1;
        long long ans = cnt * cnt2;
        for(int i = 1;  i<= n ; i++)
        {
            if(s[i] == s[i -1])
            {
                res++;
            }
            else
            {
                ans = max(ans, res*res);
                res = 1;
            }
        }
         ans = max(ans, res*res);
        cout << ans << endl;
    }
    return 0;
}
