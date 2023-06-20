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
 int n,k;
 cin>>n>>k;
 V A(n);
 V B(n);
 input(A);
 input(B);
 VP X;
 V ans(n);
 for(int i=0;i<n;i++)
 {
    X.pb({A[i],i});
 }
 sort(X.begin(),X.end());
 sort(B.begin(),B.end());
 //cout<<X[0].ff<<" "<<X[0].ss; 
 for(int i=0;i<n;i++)
 {
    ans[X[i].ss]=B[i];
 }
 output(ans);
 //for(auto &i:X)
 //cout<<i.ss<<" ";
 cout<<endl;
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

