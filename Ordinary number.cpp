//In the name of ALLAH
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

        int cnt = 0;

        for(int i = 1 ; i <= n ; i = i*10+1)
        {
           for(int j = 1 ; j <= 9 ; j++)
           {
               if(i*j <= n)
               {
                   cnt++;
               }
           }
        }
        cout << cnt << endl;
    }

    return 0;
}
// Alhumdulillah
