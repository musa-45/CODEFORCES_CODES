
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int ar[n];
    for(int i = 0 ; i <n ; i++)
    {
        cin >> ar[i];
    }
    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int cnt = 1,maxc = INT_MIN;
    for(int i = 0; i < n-1 ; i++)
    {
        if(ar[i] <= ar[i+1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if(cnt > maxc)
        {
            maxc= cnt;

        }
    }
    cout << maxc << endl;
    return 0;
}
