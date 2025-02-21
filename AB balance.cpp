#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin , s);

        if(s.length() > 1)
        {
            string result = s.back() + s.substr(1);
            cout << result << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
