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
void dfs(int currentNode,vector<vector<int>>&ADJ,int parent,int &ans,int currentLevel)
{
  ans=max(ans,currentLevel);
  for(auto &neighbours:ADJ[currentNode])
  {
    if(neighbours!=parent)
    dfs(neighbours,ADJ,currentNode,ans,currentLevel + 1);
  }
}
void solve(int t)
{
  int n;
  cin>>n;
  vector<vector<int>>ADJ(n,vector<int>());
  vector<int>roots;
  int ans=0;
  int k;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    if(x!=-1)
    {
        ADJ[i].pb(x-1);
        ADJ[x-1].pb(i);
    }
    else
    {
        roots.pb(i);
    }
  }
  /*for(int i=0;i<n;i++)
  {
    cout<<i<<" : ";
    for(auto &j:ADJ[i])
    {
        cout<<j<<" ";
    }
    cout<<endl;
  }*/
  //cout<<k;
  for(auto &i:roots)
  dfs(i,ADJ,-1,ans,0);
  cout<<ans+1;
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

