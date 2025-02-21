#include<bits/stdc++.h>
using namespace std;

const double PI = 2 * acos(0.0);
const double a = 1e-9;
int main()
{
    int t;
    cin >> t;
    for(int i = 1 ;  i  <= t ; i++)
    {
        double r;
        cin >> r;

        double b = 2 * r;
        double squre = b * b;
        double circle = PI * r * r;

        double sub = squre - circle;
        sub += a;

        cout << fixed << setprecision(2);
        cout << "case " << i << ": " << sub << endl;
    }
    return 0;
}
