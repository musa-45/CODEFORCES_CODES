#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> fre(26,0);

        for(char c : s)
        {
            fre[c-'a']++;
        }
        int cnt = 0;

        for(int i : fre)
        {
            if( i % 2 != 0)
            {
                cnt++;
            }
        }
        if(cnt - 1 < 0) cnt = 0;
        else cnt = cnt -1;

        if( k >= cnt && k <= n)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO"<< endl;
        }


    }
    return 0;
}
