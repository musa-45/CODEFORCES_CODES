#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (a + b <= c || b + c <= a || c + a <= b)
        {
            cout << "Invalid triangle" << endl;
            continue;
        }

        ll s = (a + b + c) / 2;

        ll squ = s * (s - a) * (s - b) * (s - c);

        if (squ < 0)
        {
            cout << "Invalid triangle" << endl;
            continue;
        }

        ll P = 4 * squ;
        ll Q = (a + b + c) * (a + b + c);

        ll PQ = gcd(P, Q);
        P /= PQ;
        Q /= PQ;
        if (Q < 0)
        {
            P = -P;
            Q = -Q;
        }

        cout << P << "/" << Q << endl;
    }

    return 0;
}
