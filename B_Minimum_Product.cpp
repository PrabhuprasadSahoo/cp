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
       ll int a,b,x,y,n;
       cin>>a>>b>>x>>y>>n;
       if(((a-x)+(b-y))<=n) 
       cout<<(ll int)(x*y)<<endl;
       else
       {
         if(n%2==0)
         cout<<(ll int)((a-n/2)*(b-n/2))<<endl;
         else
         cout<<
       }
    }
    return 0;
}

