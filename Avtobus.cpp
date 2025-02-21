#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        if( n < 4 || n % 2 == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            ll boro ,choto;
            choto = n / 6;

            ll ans = n % 6;
            if( ans != 0)
            {
                choto++;
            }
            boro = n / 4;

            cout << choto << " " << boro << endl;
        }

    }
    return 0;
}
