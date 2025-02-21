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
         vector<int> a(n) , b(n);
         for(int i = 0  ;i < n ; i++)
         {
             cin >> a[i] >> b[i];
         }
         int cnt = 0 ;
         for(int i= 0 ; i < n ; i++)
         {
             if(a[i] == b[i])
             {
                 cout <<"Case " << t << ": " << "0" << endl;;
             }
             else if(a[i] != b[i])
             {
                 cnt++;

             }

         }
         cout <<"Case " << t << ": " << n-cnt << endl;
    }
    return 0;
}
