#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h ,m,cnt ;
        cin >> h >> m;
        cnt = (23 - h) * 60 + (60 - m);
        cout << cnt << endl;
    }
}
