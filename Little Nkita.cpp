#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;

        if (n == m)
        {
            cout << "YES" << endl;
        }
        else if(n < m)
        {
            cout << "NO" << endl;
        }
        else
        {



        long long ans = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            if(ans<=m)
            {
                ans++;

            }
            else
            {
                ans--;
            }
        }
        if(ans == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout <<"NO" << endl;
        }
        }
    }
    return 0;
}
