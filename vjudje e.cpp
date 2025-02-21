#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> res;

    for(int i = 0 ; i < n ; i++)
    {
        long long l , r , d;
        cin >> l >> r >> d;

        if( d < l)
        {
            res.push_back(d);
        }
        else
        {
            res.push_back(((r / d) + 1) * d);
        }
    }

    for(auto i : res)
    {
        cout << i << endl;
    }
    return 0;
}
