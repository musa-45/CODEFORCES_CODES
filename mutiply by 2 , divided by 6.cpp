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
        int cnt = 0;

        while(n != 1)
        {
            if(n % 6 == 0)
            {
                n /= 6;
            }
            else if( n % 3 == 0)
            {
                n *= 2;
            }
            else
            {
                cnt = -1;
                break;
            }
            cnt++;
        }
        cout << cnt << endl;

    }
    return 0;

}
