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
        vector <int > b(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> b[i];
        }

        int cnt = 0 , ans = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] > b[i])
            {
                cnt++;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
