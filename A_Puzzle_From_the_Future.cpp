#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(ll int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(ll int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      string b;
      cin>>n;
      cin>>b;
      string a="1"; 
      fr(i,1,n,1)
      {
        if('1'+b[i]!=a[i-1]+b[i-1])
        a+="1";
        else
        a+="0";
      }
      cout<<a<<endl;  
    }
    return 0;
}

