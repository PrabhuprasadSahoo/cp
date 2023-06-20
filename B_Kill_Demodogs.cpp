#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(ll int i=a;i<=b;i+=k)
#define frrev(i,a,b,k) for(ll int i=a;i>b;i-=k)
#define mod 1000000007
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
    cout<<((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod<<endl;
    }
    return 0;
}

