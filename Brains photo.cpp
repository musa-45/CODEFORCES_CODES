#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;

     bool  ans = false;

    char a[n][m];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
            {
                ans = true;
            }
        }
    }

    if(ans == true )
    {
        cout << "#color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
    return 0;

}
