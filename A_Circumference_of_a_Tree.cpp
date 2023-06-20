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
void dfs(int currentNode,vector<vector<int>>&ADJ,int parent,vector<int>&dist)
{
    if(parent!=-1)
    dist[currentNode]=dist[parent]+1;
    else
    dist[currentNode]=0;
    for(int neighbours:ADJ[currentNode]){
        if(neighbours!=parent)
        dfs(neighbours,ADJ,currentNode,dist);
    }
}
void solve(int t)
{
 int n;
 cin>>n;
 int a,b;
 vector<vector<int>>ADJ(n);
 fr(i,0,n-1,1)
 {
    //int a,b;
    cin>>a>>b;
    //cout<<a<<" "<<b<<endl;
    a--;b--;
    ADJ[a].pb(b);
    ADJ[b].pb(a);
 }
 /*fr(i,0,n,1)
 {
    cout<<i<<" : ";
    for(int j:ADJ[i])
    cout<<j<<" ";
    cout<<endl;
}*/
 int x=0,y=0,z=0;
 vector<int>distX(n,0);
 vector<int>distY(n,0);
 dfs(x,ADJ,-1,distX);
 fr(i,0,n,1){if(distX[i]>distX[y])y=i;}
 dfs(y,ADJ,-1,distY);
 fr(i,0,n,1){if(distY[i]>distY[z])z=i;}
 cout<<distY[z]*3;
 
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

