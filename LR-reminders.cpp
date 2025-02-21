#include<bits/stdc++.h>
using namespace std;
int n,mod,a[200001],b[200001],ans[200001];

    int main(){
    	int t; cin >> t;
    	while(t--){
    		cin >> n >> mod;
    		for(int i = 1;i <= n;i++)
            {
                cin >> a[i];
            }
    		string s;
    		cin >> s;
    		int l = 1,r = n;
    		for(int i = 0;i < s.length();i++){
    			if(s[i] == 'L') b[i] = a[l++];
    			else b[i] = a[r--];
    		}
    		int x = 1;
    		for(int i = n - 1;i >= 0;i--){
    			x = (x * b[i]) % mod;
    			ans[i] = x;
    		}
    		for(int i = 0;i < n;i++)
            {
                cout << ans[i] << " ";
            }
    		cout << endl;
    	}
    	return 0;
    }
