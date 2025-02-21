#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    int zero = 0 ;
    int one = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    int result = min(zero , one);

    cout << n - 2 * result << endl;
}
