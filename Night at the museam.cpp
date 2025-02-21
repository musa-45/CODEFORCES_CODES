#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int res = 0;
    char current = 'a';

    for(char target : s)
    {
        int clock = (target - current +26 )% 26;
        int anti = (current - target + 26)% 26;

        res += min(clock , anti);
        current = target;
    }
    cout << res << endl;
}
