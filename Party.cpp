#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt= 0;
    cin >> t;
    while(t--)
    {
        int n;

        cin >> n;
        if(n == -1)
        {
            cerr<<"no item"<< endl;
        }
        else
        {
            cnt++;
        }
        cout << cnt << endl;
    }
    //cout << cnt << endl;
}
