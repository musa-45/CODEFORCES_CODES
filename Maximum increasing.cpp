#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];
    for(int i = 0 ;i < n ; i++)
    {
        cin >>arr[i];
    }
    int mx = 1;
    int cur = 1;

    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > arr[i-1])
        {
            cur++;
        }
        else
        {
            cur = 1;
        }
        mx = max(mx,cur);
    }
    cout << mx << endl;
    delete []arr;
    return 0;
}
