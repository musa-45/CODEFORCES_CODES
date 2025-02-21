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

        string s;
        cin >> s;

        int fb =-1 , lb = -1;

        for(int i = 0 ; i< n ; i++)
        {
            if(s[i] == 'B')
            {
               if(fb == -1)
               {
                   fb = i;
               }
               lb = i;

            }
        }
        if(fb == lb)
        {
            cout <<"1"<< endl;
        }
        else
        {
            int min_l = lb - fb+1;
            cout << min_l << endl;
        }
    }
    return 0;
}
