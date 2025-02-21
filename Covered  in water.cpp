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

        string s;
        cin >> s;

        int cnt = 0 , ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '.')
            {
                cnt++;
                ans++;
            }
            else
                cnt = 0;
            if(cnt >= 3) break;
        }
        if(cnt >= 3) cout << 2 << endl;
        else cout << ans << endl;
    }
 return 0;
}
