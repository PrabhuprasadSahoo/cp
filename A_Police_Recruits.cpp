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
 V A(n);
 input(A);
 int sum=0;
 int c=0;
 for(int i=0;i<n;i++)
 {
  if(A[i]==-1)
  {
   if(sum==0)c++;
   else sum--;
  }
  else{
   sum+=A[i];
  }
 }
 cout<<c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;
    //cin>>t;
    //for(int i=1;i<=t;i++)
    //{
       solve(1);
    //}
    return 0;
}

