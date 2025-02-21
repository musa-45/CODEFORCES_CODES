#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        //int ans = sort(a.begin() , a.end());
        if(is_sorted(a.begin() , a.end()) || k> 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;

}
