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
 ll int n,x;
 cin>>n>>x;
  string s;
 if(x>=1-n && x<=n+1)
 {
  if(x>=1)
  {
    int p=x-1;
    fr(i,0,n-p,1)
    {
        s+='*';
    }
    fr(i,0,p,1)
    {
        s+='+';
    }
  }
  else
  {
    int p=1-x;
    fr(i,0,p,1)
    {
        s+='-';
    }
    fr(i,0,n-p,1)
    {
        s+='*';
    }
  }
  cout<<s<<endl;
 }
 else
 cout<<"-1\n";
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

