#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
       int n ;
       cin>> n ;

       int arr[n];
       for(int i=0;i<n;i++){

            cin>> arr[i] ;
       }

          long long neg=0,sum=0;
          for(int i=0;i<n;i++){

               if(arr[i]<0){
                    ++neg ;
                    arr[i]=-arr[i];
               }
               sum+=arr[i] ;
          }
            sort(arr,arr+n);

            if((neg&1)) {
                 sum-=2*arr[0] ;
            }
             cout<< sum <<endl;
       }


    return 0;
}
