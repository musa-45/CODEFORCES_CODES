#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--)
    {
    long long n;
    cin>>n;
       string s1, s2;
       cin>>s1>>s2;
       /*if(s1 == s2)
       {
           cout << "0" << endl;

       }*/
       long long  c1 = 0, c2 = 0 , c3 = 0 , c4 = 0;
       for(int i = 0; i < n; i++)
       {
           if(s1[i] == '0')
           {
               c1++;
           }
           else
           {
               c2++;
           }

           if(s2[i] == '0')
           {
               c3++;
           }
           else
           {
               c4++;
           }
       }
       long long x,y;
       x = y = 0;
       for(int i = 0 ; i < n ; i++)
       {
           if(s1[i] == '0' && s2[i] == '1')
           {
               x++;
           }
           else if(s1[i]=='1' && s2[i]=='0')
           {
               y++;
           }
       }
       long long ans = min(x,y)+abs(x-y);
       cout << ans << endl;

    }

    return 0;
}
