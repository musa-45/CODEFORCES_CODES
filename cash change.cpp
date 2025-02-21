#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> tk = {500, 100, 50, 10, 5, 1};
    vector<int> result;

    for (int denom : tk)
    {
        while (N >= denom)
        {
            N -= denom;
            result.push_back(denom);
        }
    }

    sort(result.begin(), result.end());
    for (int note : result)
    {
        cout << note << " ";
    }
    return 0;
}

