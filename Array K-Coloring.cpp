
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin >> n >> k;
    vector<int> a(n);

    map<int, vector<int>> indices;

    for(int i = 0 ; i < n ; i++)
    {

        cin >> a[i];
        indices[a[i]].push_back(i);
    }

    for(auto &pair : indices)
    {

        if(pair.second.size() > k)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    vector<int> colors(n);
     int color = 1;

    for(auto &pair : indices)
    {
        for(auto idx : pair.second)
        {
            colors[idx] = color;

            color = (color % k) + 1;
        }

    }
    cout << "YES" << endl;
    for(auto c: colors)
    {
        cout << c << " ";
    }
    cout << endl;
    return 0;

}
