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
       vector<int> a(n);
       for(int i = 0 ; i < n ; i++)
       {
           cin >> a[i];
       }
       sort(a.begin() , a.end());
       int cnt = 1;
       for(int i = 1 ; i < n ;i++)
       {
           if(a[i]-a[i-1] == 1)
           {
               cnt = 2;
               break;
           }
       }
       cout << cnt << endl;

    }
    return 0;
}


