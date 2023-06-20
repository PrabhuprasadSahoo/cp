#define mod 1000000007
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
        ll int n;
        cin>>n;
        ll int ans=1;
        for(int i=1;i<=n;i++)
        {
        ans=(ans*i)%mod;
        }
         ll int k=(ans*((n*(n-1))%mod))%mod;
         cout<<k<<endl;
    }
    return 0;
}

