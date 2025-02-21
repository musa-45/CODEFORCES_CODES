#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;

        if((a%2 != 0 && b % 2 != 0) || (a % 2 != 0 &&  b /2 == a) || (b % 2 != 0 && a/2 == b) || ( a==1 && b == 1))
        {
            cout << "NO"<< endl;
        }
        else
        {
            cout <<"YES"<< endl;
        }
    }
    return 0;
}
