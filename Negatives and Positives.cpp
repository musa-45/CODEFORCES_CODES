#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n , ans = 0 , negs = 0;
        cin >> n;

        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];

            if(a[i] < 0)
            {
                negs++;
                a[i] = -a[i];
            }
            ans += a[i];
        }

        sort(a.begin() , a.end());
        if( negs & 1 )
        {
            ans -= 2*a[0];
        }
        cout << ans << endl;
    }
    return 0;
}
