#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;

        int ar[] = {a,b,c};
        sort(ar,ar+3);

        if(ar[0] == ar[1] && ar[1] == ar[2])
        {
            cout << "YES" << endl;
        }
        else if(ar[1] % ar[0]== 0 && ar[2] % ar[0] == 0 && ar[1] / ar[0] - 1 + ar[2] / ar[0] - 1 <= 3)
        {
            cout <<"YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
