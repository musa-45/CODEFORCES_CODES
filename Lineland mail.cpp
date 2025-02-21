#include<bits/stdc++.h>
using namespace std;
int main()

{

        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       // sort(a.begin() , a.end());

        for(int i = 0 ; i < n ; i++)
        {
            int mini , maxi ;

            if(i == 0)
            {
                mini = abs(a[i] - a[i+1]);
            }
            else if(i == n -1)
            {
               mini = abs(a[i] - a[i-1]);
            }
            else
            {
                mini = min(abs(a[i] - a[i -1]), abs(a[i] - a[i+1]));
            }
            maxi = max(abs(a[i] - a[0]), abs(a[i] - a[n-1]));
            cout << mini << " " << maxi << endl;
        }


}
