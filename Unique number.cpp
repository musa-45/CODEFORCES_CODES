#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int x;
    cin >> x;
    vector<int> ar;
    int sum = 0 , last = 9;
    while(sum < x && last > 0)
    {
        ar.push_back(min(x-sum , last));
        sum += last;
        last--;
    }
    if(sum < x)
    {
        cout << -1 << endl;
    }
    else
    {
        reverse(ar.begin() , ar.end());
        for(int i : ar)
        {
            cout << i ;
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
