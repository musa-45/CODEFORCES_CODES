#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       ll x,y,a,b;
       cin >> x >> y >> a >> b;


       ll  Min = min(x,y);
       ll Max = max(x,y);

       ll dif = Min - 0;
       ll dif2 =  Max -Min;

       ll total = 0;

       if(2*a < b)
       {
           total += 2*a*dif;
           total += dif2*a;
       }
       else
       {
           total += b*dif;
           total += dif2 * a;
       }
       cout << total << endl;
    }

    return 0;
}
