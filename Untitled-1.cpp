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
#define mod 100000007
void solve(int t)
{
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 vector<pair<int,int>>X;
 int vc=0;
 int c=0;
 fr(i,0,n,1)
 {
    
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
    {
        X.pb({i,c});
        c=0;
    }
    else
    {
        c++;
    }
 }
 ll int ans=0;
 ll int count=1;
 /*for(auto &i:X)
 cout<<i.first<<" "<<i.second<<endl;
 cout<<endl;*/
 vc=X.size();
 
    for(int i=k;i<vc;i+=k)
    {
        count=(count*(X[i].second+1))%mod;
    }
    cout<<count<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

