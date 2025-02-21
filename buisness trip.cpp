#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;

    vector<int> a(12);
    for(int i = 0 ; i < 12 ; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int month = 0;
    int height = 0;

    for(int i = 11 ; i >= 0 ; i--)
    {
        if(height >= k)
        {
            break;
        }
        height += a[i];
        month++;
    }
    if(height < k)
    {
        cout << -1 << endl;
    }
    else if ( k == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << month << endl;
    }
    return 0;
}
