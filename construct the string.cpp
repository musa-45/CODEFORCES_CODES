
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , len , sub ,dis ,cnt;
    cin >> t;
    while(t--)
    {
        cin >> len >> sub >> dis;
        string s;
        char ch = 'a';
        for(int i = 1 ,cnt = 1 ; i <= len ; i++,cnt++)
        {
            s.push_back(ch);
            ch++;
            if(cnt == dis)
            {
                ch = 'a';
                cnt = 0;
            }
            if(ch > 'z')
            {
                ch = 'a';
            }
        }
        cout << s << endl;
    }
}
