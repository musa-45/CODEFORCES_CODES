#include<iostream>
using namespace std;

bool ok(string s, int b,int e)
{
    while(b < e)
    {

    
    if(s[b] != s[e] )
    {
        return false;
    }
    b++;
    e--;
    }
    return true;
}
int main()
{
   string S;
   cin >> S;
   int mx = 1;
   for(int i = 0 ; i< S.length() ; i++)
   {
     for(int j = i ; j < S.length() ; j++)
     {
         if(ok(S,i,j))
         {
            int cl = j - i + 1;
            mx = max(mx,cl);
         }
     }
   }
   cout << mx << endl;
}

