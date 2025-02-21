#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n , a,b;
        cin >> n >> a >>b;
        if(a>= b)
        {
            cout << a*n << endl;
        }
        else
        {
            ll k = min(b - a +1 , n);
            cout << (b-k+1) * n + k*(k-1) / 2 << endl;
        }

    }
}
