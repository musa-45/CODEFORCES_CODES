#include <bits/stdc++.h>

using namespace std;
typedef long long ll ;
void solve(){

   string s, x, tem; cin >> s;

     tem = s;

     sort( s.begin(), s.end());
     x = s;

     reverse( x.begin(), x.end());

     if( x == s ){
         cout << "NO" << endl;
     }else{
         cout << "YES" << endl;
         if( x== tem ){
             cout << s << endl;
         }else{
             cout << x << endl;
         }
     }
      }

int main()
{
    int t ;  cin >> t ;

    while(t--){
            solve() ;

    }


}
