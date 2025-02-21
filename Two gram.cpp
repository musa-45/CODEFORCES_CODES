#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    string s;
    cin >> s;

    int res = 0;
    int cnt = 0;
    string ans;
    for(int i = 0 ; i < n-1 ; i++)
    {
        cnt = 0;
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(s[i] == s [j] && s[i+1] == s[j+1])
            {
                cnt++;
                if( res < cnt)
                {
                    res = cnt;
                    ans = string(1,s[i])+string (1,s[i+1]);
                }
            }
        }
    }
    cout << ans << endl;
}
