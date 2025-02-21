#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,cnt = 0;
        cin >> n;

        vector<int>a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
       int i = 0;
       int j = n-1;

       while(i <= j)
       {
           if(a[i] == 0)
           {
               i++;
           }
           else if(a[j] == 1)
           {
               j--;
           }
           else
           {
               swap(a[i++],a[j--]);
               cnt++;
           }
       }
       cout << cnt << endl;


    }
    return 0;
}
