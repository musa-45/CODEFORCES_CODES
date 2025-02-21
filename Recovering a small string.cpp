#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        vector<char>v(26);

        char ch = 'a';

        for(int i = 1 ; i <= 26 ; i++){

            v[i] = ch++;
        }
        sort(v.begin() , v.end());
        if(n <=28)
        {
            int temp = n -2;
            cout << "aa" << v[temp] << endl;
        }
        else if(n <=53)
        {
            n -= 26;

            int temp = n -1;

            cout << "a" << v[temp] << "z" << endl;
        }
        else
        {
            n -= 26;
            char ch = 'z'-n ;
            cout <<ch<< "zz" << endl;
        }

    }
    return 0;
}
