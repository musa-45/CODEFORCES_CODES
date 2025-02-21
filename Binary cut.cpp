#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt = 1;
        bool ok = false;

       for(int i = 0 ;i+1 < s.length() ; i++)
       {
           cnt += (s[i] != s[i+1]);

           ok |= (s[i]== '0' && s[i+1]== '1');
       }
       cout << cnt - ok << endl;
    }
    return 0;
}
