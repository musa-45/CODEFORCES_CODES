#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x = "abcdefghijklmnopqrstuvwxyz", s;
        int n,k;
        cin >> n >> k;

        for(int i = 0 ; i < k ; i++)
        {
            s += x[i];
        }
        for(int i  = 0 ; i < n ; i++)

            cout << s ;
            cout << endl;

    }
}
