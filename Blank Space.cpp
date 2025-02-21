#include<bits/stdc++.h>
using namespace std
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,len = 0,cnt = 0;
        cin >> n;

        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];

            if(a[i] == 0)
            {
                len++;
            }
            else
            {
                cnt = max(cnt,len);
                len = 0;
            }
        }
        cout << max(len , cnt) << endl;

    }
}
