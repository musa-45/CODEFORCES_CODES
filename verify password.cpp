#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        vector<int> v;
        vector <char> c;

        bool  flag = 0;

        if(s[0] >= 'a' && s[0] <= 'z')
        {
            flag = 1;
        }
        for( auto x : s)
        {
            if(x>= 'a' && x <= 'z')
              {
                 c.push_back(x);
              }
              else
              {
                  v.push_back(x);
              }
       }

       if(flag && !v.empty())
       {
           cout <<"NO" << endl;

       }
       else if (v.empty() && is_sorted(c.begin() , c.end()))
       {
           cout << "YES" << endl;
       }
        else if (c.empty() && is_sorted(v.begin() , v.end()))
       {
           cout << "YES" << endl;
       }
       else if(is_sorted(v.begin() , v.end()) && is_sorted(c.begin() , c.end()))
       {
           cout <<"YES" << endl;
       }
       else
       {
           cout <<"NO" << endl;
       }

    }
    return 0;
}
