#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {

        string s1,s2;
        cin >> s1 >> s2;

        int j = 0;

        for(int i = 0  ; i < s1.length() ; i++)
        {
            if(j >= s2.length())
            {
                break;
            }
            if(s1[i] == s2[j])
            {
                j++;
                continue;
            }
            if(s1[i] == '?')
            {
                s1[i] = s2[j];
                j++;
                continue;
            }
        }
        for(int i = 0 ; i < s1.length(); i++)
        {
            if(s1[i] == '?')
            {
                s1[i] = 'a';
            }
        }
        if(j >= s2.length())
        {
            cout << "YES" << endl;
            cout << s1 << endl;
        }
        else
        {
            cout <<"NO"<< endl;
        }
    }
    return 0;
}
