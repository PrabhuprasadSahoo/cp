#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(int t)
{
 int n,m;
 cin>>n>>m;
 V A(n);
 V C(n+m+1,0);
 fr(i,0,n,1)
 {
    cin>>A[i];
    C[A[i]]=m+1;
 }
 fr(i,0,m,1)
 {
    int p,v;
    cin>>p>>v;
    p--;
    C[A[p]]-=(m-i);
    C[v]+=(m-i);
    A[p]=v;
 }
 ll ans=(ll)n*m*(m+1);
 fr(i,0,n+m+1,1)
 {
    ans-=((ll)C[i]*(C[i]-1))/2;
 }
 cout<<ans<<endl;
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

