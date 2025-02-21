#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i =2 ; i<= n ; i++)
    {
        cin >> v[i];
    }

    vector<int> a;

    int current = n;

    while(current != 1)
    {
        a.push_back(current);

        current = v[current];
    }
    a.push_back(1);

    reverse(a.begin(), a.end());
    for(int router : a)
    {
        cout << router << " ";
    }
    cout << endl;

    return 0;

}
