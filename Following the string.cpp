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

        vector<int> cnt(26);

        for(int i = 0 ,a; i < n ; i++)
        {
            cin >> a;
            for(int j = 0 ; j < 26 ; j++)
            {
                if(cnt[j] == a)
                {
                    cout << char('a' + j);
                    cnt[j]++;
                    break;
                }
            }
        }
        cout << endl;
    }
}
