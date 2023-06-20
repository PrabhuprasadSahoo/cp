#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"No\n"
#define YES cout<<"Yes\n"
#define V vector<ll int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void dfs(int currentNode,vector<vector<int>>&ADJ,int parent,bool &spruce)
{
    int leafNode=0;
    for(auto &children:ADJ[currentNode])
    {
        if(children!=parent)
        {
            if(ADJ[children].size()==1)
            leafNode++;
            else
            dfs(children,ADJ,currentNode,spruce);
        }
    }
    if(leafNode<3)
    spruce=false;
}
void solve(int t)
{
 int n;
 cin>>n;
 vector<vector<int>>ADJ(n,vector<int>());
 vector<int>childrens(n,0);
 vector<bool>isLeaf(n,false);
 for(int i=1;i<n;i++)
 {
    int x;
    cin>>x;
    ADJ[i].pb(x-1);
    ADJ[x-1].pb(i);
 }
 bool spruce=true;
 dfs(0,ADJ,-1,spruce);
 
if(spruce)
YES;
else
NO;
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

