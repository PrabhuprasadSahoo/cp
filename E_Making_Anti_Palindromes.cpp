#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<ll int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(int t)
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(n&1)
    {
        cout<<"-1\n";
        return;
    }
    ll c=0;
    ll r=n-1;
    ll l=0;
    map<char,ll>mp,mp2;
    fr(i,0,n,1)
    mp[s[i]]++;
    ll mx=0,mxx=0;
    
    for(auto &it:mp)
    {
        mx=max(mx,it.ss);
    }
    if(mx>n/2)
    {
        cout<<"-1\n";
        return;
    }
   fr(i,0,n/2,1)
   {
    if(s[i]==s[n-i-1])
    {
        c++;
        mp2[s[i]]++;
        mxx=max(mxx,mp2[s[i]]);
    }
   }
    cout<<max(mxx,(c+1)/2)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

