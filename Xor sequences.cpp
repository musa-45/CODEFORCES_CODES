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

    long long x = a ^ b;
    long long len = 1;

    while(x % 2 == 0)
    {
        x >>= 1;
        len<<=1;
    }
    cout << len << endl;
 }


    return 0;
}
