#include <bits/stdc++.h>

using namespace std;
typedef long long ll ;

int main() {

      int t ;

      cin >> t ;

      while(t--){

           int n , h,m ;

           cin >> n ;

           cin >> h >> m ;
           int tt=60*h+m ;

           int res=24*60 ;

           for(int i=0;i<n;i++){

                cin >> h >> m ;

                int ans= 60*h+m -tt ;

                if(ans<0) ans+=24*60 ;

                res= min(res,ans) ;
           }

           cout<< res/60 << " " << res%60 <<endl;
      }
      return 0;
}
