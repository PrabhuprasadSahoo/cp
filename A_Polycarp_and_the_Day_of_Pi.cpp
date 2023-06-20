#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      string S="3141592653589793238462643383279";
      int c=0;
      fr(i,0,s.length(),1)
      {
        if(s[i]!=S[i])
        break;
        else
        c++;
      }  
      cout<<c<<endl;
    }
    return 0;
}

