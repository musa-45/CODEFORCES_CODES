#include <bits/stdc++.h>
using namespace std;

int main(){

    string s,h,p;
    cin >> s >> h >>p;
    string result = s+h;
  sort(result.begin(),result.end());
  sort(p.begin(),p.end());

if(p == result){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

    return 0;
}
