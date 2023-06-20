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
 ll int n;
 cin>>n;
 V v(n);
 input(v);
 int c=0;
 int mx=-1;
 fr(i,0,n,1)
 {
    
    if(v[i]>mx && ((i+1==n) or (v[i]>v[i+1])))
    c++;
    mx=max(mx,v[i]);
 }
 cout<<"Case #"<<t<<": "<<c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(i);
    }
    return 0;
}

