#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt = 0;
        cin >> n;

        string s;
        cin >> s;
        for( auto c : s)  if(c == 'U') cnt++;
        if(cnt & 1) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
