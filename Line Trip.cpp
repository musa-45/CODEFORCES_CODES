#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int pre =  0 , res = 0;

        vector<int>a(n);
        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
            res = max(res, a[i] - pre);
            pre = a[i];
        }
        int ans = 2* (x - a[n-1]);


       res = max(res , ans);

       cout << res << endl;


    }
}
