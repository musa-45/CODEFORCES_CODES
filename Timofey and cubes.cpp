#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> ar[i];
    }
    for(int i = 0 ; i < n/ 2 ; i++)
    {
        if( i % 2 == 0)
        {
            swap(ar[i] , ar[n - i -1]);
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        cout << ar[i] <<" ";
    }
    return 0;
}
