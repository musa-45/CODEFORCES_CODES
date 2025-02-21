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
        vector<long long> a(n);
        vector< long long> b(n+1);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin() , b.end());
        long long sum1 = accumulate(a.begin(),a.end() , 0LL);
        long long sum2 = accumulate(b.begin(),b.end() , 0LL);

        long long mx = sum2-sum1;

        long long mn = LLONG_MAX;

        for(int i = 0 ; i < n+1 ; i++)
        {
            if(binary_search(a.begin(),a.end() , b[i] - mx))
            {
                mn = min(mn, abs(b[i] - mx ));
            }
        }

        cout << mn << endl;

    }
}
