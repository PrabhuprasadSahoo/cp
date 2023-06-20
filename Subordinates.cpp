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
void dfs(int currentNode,vector<vector<int>>&ADJ,int ParentNode,vector<int>&subtree)
{
    for(auto &neighbours:ADJ[currentNode])
    {
        if(neighbours!=ParentNode){
           dfs(neighbours,ADJ,currentNode,subtree);
           subtree[currentNode]+=subtree[neighbours];   
    }
    }
    subtree[currentNode]++;
}
void solve(int t)
{
    int n;
    cin>>n;
    vector<vector<int>>ADJ(n);
    vector<int>subtree(n,0);
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        ADJ[x-1].pb(i);
        ADJ[i].pb(x-1);
    }
    dfs(0,ADJ,-1,subtree);
    for(auto &i:subtree)
    {
        cout<<i-1<<" ";
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<i<<" : ";
        for(auto &x:ADJ[i])
        cout<<x<<" ";
        cout<<endl;
    }*/
    
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

