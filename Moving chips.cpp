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
        int op = 0;
        int chip = -1;

        for(int i = 0 ; i < n ; i++)
        {
            if(a[i] == 1)
            {
                if(chip != -1)
                {
                    op += i - chip -1;
                }
                chip = i;
            }
        }
        cout << op << endl;
    }
    return 0;
}
