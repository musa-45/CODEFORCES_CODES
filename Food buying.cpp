#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s;
        cin >> s;

        int ans = 0 ;

        while(s >= 10)
        {
            int sp = ( s / 10) * 10;

            ans =  ans + sp;

            s = s - sp + ( sp / 10);
        }
        ans += s;
        cout <<  ans << endl;
    }
    return 0;
}
