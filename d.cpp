#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end() , greater<int>());
    int cnt  = 0;
    int beg = 0;
    int end = n-1;

    while(beg <= end)
    {
        int current = a[beg];
        beg++;

    while(current <= 4 && end >= beg)
    {
        current += a[end];
        end--;
    }
    cnt++;

    }
    cout << cnt << endl;
    return 0;
}
