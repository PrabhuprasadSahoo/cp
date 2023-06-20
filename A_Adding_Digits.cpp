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
  int a,b,n;
  cin>>a>>b>>n;
  int x=a;
  for(int i=0;i<=9;i++)
  {
    int p=a;
    p=p*10+i;
    if(p%b==0)
    {
        x=p;
        break;
    }
  }
  if(x==a)
  cout<<"-1";
  else
  {
    cout<<x;
    fr(i,0,n-1,1)
    cout<<"0";
  }
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

