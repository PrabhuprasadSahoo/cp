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
 int n;
 cin>>n;
 VP A(n);
 fr(i,0,n,1)
 {
    int a,b;
    cin>>a>>b;
    A[i]={a,b};
 }
 sort(A.begin(),A.end());
 for(int i=1;i<n;i++)
 {
    if((A[i].ff>A[i-1].ff) && (A[i].ss<A[i-1].ss))
    {
        cout<<"Happy Alex";
        return;
    }
 }
 cout<<"Poor Alex";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;
    t=1;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

