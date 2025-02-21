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
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        int Min = INT_MAX;
        int Max = INT_MIN;
        for(int  i = 0 ; i < n ;i++)
        {
            Max = max(Max,a[i]);
            Min = min (Min,a[i]);
        }
        cout << Max - Min << endl;

    }
    return 0;
}
