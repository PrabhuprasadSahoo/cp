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
void dfs(int currentNode,vector<vector<int>>&ADJ,int parent,vector<int>&cats,int cntcat,int maxcat,int &ans,int k)
{
    if(cats[currentNode])cntcat++;
    else cntcat=0;
    maxcat=max(maxcat,cntcat);
    int child=0;
    for(int neighbours:ADJ[currentNode])
    {
        if(neighbours!=parent)
        {
            dfs(neighbours,ADJ,currentNode,cats,cntcat,maxcat,ans,k);
            child++;    
        }
    }
    if(child==0 && maxcat<=k)
    ans++;
}
void solve(int t)
{
 int n,k;
 cin>>n>>k;
 vector<vector<int>>ADJ(n);
 vector<int>cats(n);
 input(cats);
 fr(i,0,n-1,1)
 {
    int a,b;
    cin>>a>>b;
    a--;b--;
    ADJ[a].pb(b);
    ADJ[b].pb(a);
 }
 int ans=0;
 dfs(0,ADJ,-1,cats,0,0,ans,k);
 cout<<ans;
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

