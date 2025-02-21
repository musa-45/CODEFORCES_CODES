#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,ans = 0;
        cin >> n;

        vector<int> v(n);
        for(int i = 0 ; i <  n ; i++)
        {
            cin >> v[i];

            if(v[i] == 1 || v[i] == 3)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
