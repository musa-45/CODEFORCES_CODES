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

        vector<int>a(n);
        for(int i = 0 ; i < n ;i++)
        {
            cin >> a[i];
        }

        int cnt = INT_MAX;
        for(int i = 0 ; i < n -1 ; i++)
        {
            int res = max(a[i],a[i+1]);

            cnt  = min(cnt,res);

        }
        cout << cnt - 1 << endl;
    }
}
