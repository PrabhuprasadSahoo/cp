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
      ll int a,b;
      cin>>a>>b;
      if(b==1)
      cout<<"NO\n";
      else{
      cout<<"YES\n";
      cout<<(ll int)a<<" "<<(ll int)a*b<<" "<<(ll int)a*(b+1)<<"\n";
      }  
    }
    return 0;
}

