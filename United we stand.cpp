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
        vector<int> b, c;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = *max_element(a.begin(), a.end());

        for(int i = 0; i < n; i++)
        {
            if(ans == a[i])
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        if(b.size() && c.size())
        {
            cout << c.size() << " " << b.size() << endl;

            for(int i : c)
            {
                cout << i << " ";
            }
            cout << endl;
            for(int i : b)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
