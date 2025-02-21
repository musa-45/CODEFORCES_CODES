#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,a, k;
        vector <int> arr;
        cin >>n >> a >> k;
        for(int i= n;i> a;i--)
        {
            arr.push_back(i);
        }
        for(int i= 1; i <= a;i++)

        arr.push_back(i);

        for(int i=0;i < arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;

    }

    return 0;
}
