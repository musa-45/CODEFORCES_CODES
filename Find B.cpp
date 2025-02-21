#include<bits/stdc++.h>
using namespace std;

void pre(vector<int> &sum , vector<int > &v , int n)
{
    sum[0] = 0;
    for(int i = 1 ; i < n ; i++)
    {
        sum[i] = sum[i-1] + v [ i-1] - 1;
    }
}
void musa()
{
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    vector<int > a(n+1);
    a[0]= 0;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        if(v[i] == 1) a[i+1] + a[i] +1;
        else a[i+1] = a[i];
    }

    vector< int > b(n+1);

    pre(b,v,n);

    while(k--)
    {
        int l , r;
        cin >> l >> r;
        if(l == r)
        {
            cout << "NO" << endl;
            continue;
        }
         int cnt = a[r] - a[l-1];
         int ans = b[r] - b[l-1];

         if(ans > cnt)
         {
             cout << "YES" << endl;

         }
         else
         {
             cout << "NO" << endl;
         }

    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long pre;
        musa();
    }
    return 0;
}

