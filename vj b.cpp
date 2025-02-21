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
        for(int i  = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
       long long sum1 = 0;
       long long sum2 = 0;

       for(int i = 0 ;i < n ;i++)
       {
           if(a[i] >= 0)
           {
               sum1 += a[i];
           }
           else
           {
               sum2 += a[i];
           }
       }

       long long ans = abs(sum1) - abs(sum2) ;
       long long res = abs(ans);

       cout << res << endl;

    }
    return 0;
}
