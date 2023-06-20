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
  int n,m;
 cin>>n>>m;
 V A(n);
 V B(m);
 V C;
 input(A);
 input(B);
 int i=0;int j=0;
/*  while(i<n || j<m)
{
   if(j==m || i<n && A[i]<B[j])
   {
      i++;
   }
   else
   {
      C.pb(i);
      j++;   
   }
} */
/* for(j=0;j<m;j++)
{
   while(A[i]<B[j])
   {
      i++;
   }
   C.pb(i);
} */
/* fr(i,0,m,1)
{
   int x=lower_bound(A.begin(),A.end(),B[i])-A.begin();
   C.pb(x);
}
 output(C); */
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

