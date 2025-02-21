#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> pro , mat , py;
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;

        if(x == 1)
        {
            pro.push_back(i);
        }
        if(x == 2)
        {
            mat.push_back(i);
        }
        if(x == 3)
        {
            py.push_back(i);
        }
    }
    int res = min({pro.size() , mat.size() , py.size()});
    cout << res << endl;

    for(int i = 0 ; i < res ; i++)
    {
        cout << pro[i] << " " << mat[i] << " " << py[i] << endl;

    }
    return 0;
}
