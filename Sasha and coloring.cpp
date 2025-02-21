#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

          long long n ,k;
          cin>> n >> k ;

          if(k % 2 == 0 && k <(4*n-2))
            {
               cout<< (k/2)<<endl;
            }
          else if((4*n-2)== k)
            {
               cout<< (k+2) / 2 << endl;
            }
         else
            {
              cout<< (k+1) / 2 << endl;
            }

       }
    return 0;
}
