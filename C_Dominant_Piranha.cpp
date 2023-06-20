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
  MP m;
  for(auto &i:A)
  {
    m[i]++;
  }
  if(m.size()==1)
  cout<<"-1\n";
  else 
  {
    int k;
    int max=*max_element(A.begin(),A.end());
    fr(i,0,n,1)
    {
      if(A[i]!=max)continue;
      if(i>0 && A[i-1]!=max)k=i+1;
      if(i<n-1 && A[i+1]!=max)k=i+1;
    }
    cout<<k<<endl;
  }
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

