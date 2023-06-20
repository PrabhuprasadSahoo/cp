#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<=b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      ll int n;
      cin>>n;
      if(n%2)
      cout<<"YES\n";
      else
      {
        while(n%2==0)
            n/=2;
            if(n==1)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        
      }  
    }
    return 0;
}

