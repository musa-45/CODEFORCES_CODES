#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    int val = *max_element(a.begin() , a.end());

    long long segment = 0;
    long long current = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == val)
        {
            current++;

            segment = max(segment, current);
        }
        else
        {
            current  =0;
        }
    }
    cout << segment << endl;
}
