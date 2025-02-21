#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }

        int yr = a[0];

        for(int i = 1 ; i < n ; i++)
        {
            if(a[i] > yr)
            {
                yr =a[i];
            }
            else
            {
                int m = 1;
                int temp = a[i];

                while(a[i] <= yr)
                {
                    a[i] = temp * m;
                    m++;
                }
                yr = a[i];
            }

        }
        cout << yr << endl;
    }
    return 0;
}
