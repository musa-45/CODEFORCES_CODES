#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for(int i = 4 ; i <= n ; i++)
    {
        int complement = n - i;

        bool element = false;
        bool complements = false;

        for(int j = 2 ; j * j  <= i ; j++)
        {
            if(i % j == 0)
            {

                element = true;
                break;
            }
        }
        for(int j = 2; j*j <= complement ; j++)
        {
            if(complement % j == 0)
            {
                complements = true;
                break;
            }
        }
        if(element && complements)
        {
            cout << i << " " << complement << endl;
            break;
        }

    }
    return 0;
}
