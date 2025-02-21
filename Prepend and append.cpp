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

        string s;
        cin >> s;

        int ans = n;

        int beg = 0 , en = n -1;

        while(s[beg] != s[en] && ans > 0)
        {
            beg++;
            en--;

            ans -= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
