//In the name of ALLAH
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll k ;
        cin >> k;

       ll logerithm = log2(k);
       ll total_operation = pow(2,logerithm);

       cout << total_operation << endl;

    }
    return 0;
}
