#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(ll i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<ll> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(ll t)
{
 ll n;
 cin>>n;
 ll A[n];
 fr(i,0,n,1)
 cin>>A[i];
 unordered_map<ll,ll>mp;
 V B;
 fr(i,0,n,1)
 {
    if(mp[A[i]]==0)
    {
        int p=A[i];
        B.pb(p);
        while(A[i]==p)
        {
            mp[p]++;
            i++;
        }
        i--;
    }
    else
    {
        cout<<"IMPOSSIBLE\n";
        return;
    }
 }
 output(B);
 cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
       cout<<"Case #"<<i<<": ";
       solve(i);
    }
    return 0;
}

