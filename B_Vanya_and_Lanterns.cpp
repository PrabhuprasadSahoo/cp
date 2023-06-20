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
 int n,l;
 cin>>n>>l;
 vector<int>A(n);
 input(A);
 sort(A.begin(),A.end());
 int a=2*A[0];
 int b=2*(l-A[n-1]);
 int c=0;
 for(int i=0;i<n-1;i++)
 {
    c=max(c,(A[i+1]-A[i]));
    //cout<<c<<" ";
 }
 int ans = max(a,max(b,c));

   printf("%.10f\n",ans/2.);
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

