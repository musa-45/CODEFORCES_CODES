#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pre(n,0) , suf(n,0);
        set<char> c;

        for(int i = 0 ;i < n ; i++)
        {
            c.insert(s[i]);
            pre[i] = c.size();
        }
        c.clear();
         for(int i = n-1 ;i >= 0 ; i--)
        {
            c.insert(s[i]);
            suf[i] = c.size();
        }
        int ans = 0, cnt = 0;
        for(int i = 0 ; i < n -1 ; i++)
        {
            ans = pre[i] + suf[i+1];
            cnt = max(cnt , ans);
        }
        cout << cnt << endl;
    }
}
