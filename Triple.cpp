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

        vector<int> a(n);

        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }

        unordered_map<int,int> cnt;

        for(int i = 0 ;i < n ; i++)
        {
            cnt[a[i]]++;
        }

        int res = -1;

        for(auto s : cnt)
        {
            if(s.second >= 3)
            {
                res = s.first ;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}
