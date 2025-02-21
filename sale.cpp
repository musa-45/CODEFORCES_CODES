#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    cin >> n >> b;
    int sum = 0;

    int a[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);

    for(int i; i < b ; i++)
    {
        if(a[i] <= 0)
        {
            sum += a[i];
        }
    }
    cout << abs(sum) << endl;
    return 0;
}
