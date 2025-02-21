#include<bits/stdc++.h>
using namespace std;

void musa()
{

        long long n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum = 0;

        sum = accumulate(a.begin(),a.end() ,sum);

        if(sum % 3 == 0)
        {
            cout << 0 << endl;
            return;
        }
        if(sum % 3 == 2)
        {
            cout << 1 << endl;
            return;
        }
        for(int i  = 0 ; i < n ; i++)
        {
            long long cnt = sum - a[i];
            if(cnt % 3 == 0)
            {

            cout << 1 << endl;
            return;
            }
        }
        cout << 2 << endl;
    }

int main()
    {
        long long t;
        cin >> t;
        while(t--)
        {
            musa();
        }
        return 0;

    }


