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
        string s;
        cin >> s;

        char ar[26] ={ };
        bool ok = false;

        int res = 0;
        for(char c : s)
        {
            if(!ar[c - 'A'])
            {
                res += 2;
                ar[c - 'A'] = true;
            }
            else
            {
                res++;
            }
        }
        cout << res << endl;
    }
}
