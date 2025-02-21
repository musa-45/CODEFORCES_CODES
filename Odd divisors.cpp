#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       long long n;
       cin >> n;

       if( n % 2 == 0)
       {
           while(n % 2 == 0)
           {
               n /= 2;
           }
       }
       cout <<(n > 1 ? "YES" : "NO")<< endl;
   }
   return 0;
}
