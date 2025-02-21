#include <iostream>

using namespace std;


long long musa(long long loss , long long k)
{
    return(loss + k -1 ) / (k -1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long k , x , a;
        cin >> k >> x >> a;

        long long ans = 0;
        int ok = 1;
        for(int i = 0; ok && i < x; i++)
        {
            long long v =  musa(ans,k);
           ans += (v == 0) ? 1 : v;
            ok =  ans <= a;

        }
        cout << ((k*(a-ans) > a) ? "YES" : "NO") << endl;

    }
}
