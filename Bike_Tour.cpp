#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(ll int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<ll int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A,n) fr(i,0,n,1)cin>>A[i]
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(int t)
{
    ll int n;
    cin>>n;
    ll int A[n];
    input(A,n);
    ll int c=0;
    fr(i,0,n-1,1)
    {
       if(A[i]>A[i-1] && A[i]>A[i+1])
       c++;
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

