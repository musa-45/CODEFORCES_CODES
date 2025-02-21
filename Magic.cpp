
#include<bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    while(n.size() > 0)
    {
        if(n.substr(0, 3) == "144")
        {
            n = n.substr(3);
        }
        else if(n.substr(0, 2) == "14")
        {
            n = n.substr(2);
        }
        else if(n.substr(0, 1) == "1")
        {
            n = n.substr(1);
        }
        else
        {
            cout <<"NO"<< endl;
            return 0;
        }
    }
    cout <<"YES"<< endl;

    return 0;
}
