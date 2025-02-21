#include<bits/stdc++.h>
using namespace std;


void musa()
{
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;

    vector<pair<int ,int>> ops;

    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] != b[i])
        {
            ops.push_back({i+1,i+1});
            a[i] = (a[i] == '0' ? '1' : '0');
            if(i > 0)
            {
                ops.push_back({1,i});

                for(int j = 0 ; j < i ; j++)
                {
                    b[j] = (b[j] == '0' ? '1' : '0');
                }
            }

            ops.push_back({1,i+1});

            for(int j = 0  ; j <= i ; j++)
            {
                a[i] = (a[i] == '0' ? '1' : '0');
                b[j] = (b[j] == '0' ? '1' : '0');
            }
        }
    }
    if(a == string(n,'0') && b == string (n , '0'))
    {
        cout << "YES" << endl;

        cout << ops.size() << endl;

        for(auto op : ops)
        {
            cout << op.first << " " << op.second << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        musa();
    }
    return 0;
}
