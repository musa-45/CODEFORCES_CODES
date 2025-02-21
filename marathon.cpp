#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {

        int ar[4],cnt = 0;
        for(int i = 0 ;i < 4;i++)
        {
            cin >> ar[i];

        }
        int a = ar[0];
        for(int i = 0 ; i < 4 ; i++)
        {
            if(a < ar[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
        cnt  = 0;
    }
}
