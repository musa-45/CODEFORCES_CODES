#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin  >> x >> y >> n;

        long long ans = (n-y) / x;
        long long res = ans * x+y;

        cout << res << endl;

    }
    return 0;
}
