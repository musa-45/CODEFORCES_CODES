#include<bits/stdc++.h>
using namespace std;
int main()
{
    char d;
    cin >> d;

    string s;
    cin >> s;

    string type = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for(char& ch: s)
    {
        size_t index;

        if(d == 'L')
        {
           index = type.find(ch) + 1;
        }
        else
        {
            index = type.find(ch) - 1;
        }
        cout << type[index];

    }
    cout << endl;
    return 0;

}
