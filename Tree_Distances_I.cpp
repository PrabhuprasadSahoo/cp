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
void dfs(int currentNode,vector<vector<int>>ADJ,int parent,vector<int>&DIST)
{
    if(parent!=-1)
    DIST[currentNode]=DIST[parent]+1;
    else
    DIST[currentNode]=0;
    for(auto &neighbours:ADJ[currentNode])
    {
        if(neighbours!=parent)
        {
            dfs(neighbours,ADJ,currentNode,DIST);
        }
    }
    //return DIST;
}
void solve(int t)
{
 int n;
 cin>>n;
 vector<vector<int>>ADJ(n,vector<int>());
  for(int i = 0; i < n-1; i++)
 {
    int a,b;
    cin>>a>>b;
    a--;b--;
    ADJ[a].pb(b);
    ADJ[b].pb(a);
 }
 int x=0;
 vector<int>DISTx(n,0);
 vector<int>DISTy(n,0);
 vector<int>DISTz(n,0);
 dfs(x,ADJ,-1,DISTx);
 int y=0;
 for(int i = 0; i < n; i++)
 {
    if(DISTx[i]>DISTx[y])
    y=i;
 }
 dfs(y,ADJ,-1,DISTy);
 int z=0;
 for(int i = 0; i < n; i++)
 {
   if(DISTy[i]>DISTy[z])
   z=i;
 }
 dfs(z,ADJ,-1,DISTz);
 for(int i = 0; i < n; i++)
 {
    cout<<max(DISTy[i],DISTz[i])<<" ";
 }
 cout<<endl;
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

