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
 vector<vector<int>>A(2,vector<int>(n,0));
 int mx=2*n;
 
 int f=1;
 int b=mx-2;
 fr(i,0,n-1,1)
 {
    if(i&1)
    {
        A[1][i]=b-1;
        A[0][i+1]=b;
        b-=2;
    }
    else
    {
        A[1][i]=f;
        A[0][i+1]=f+1;
        f+=2;
    }
 }
 A[0][0]=mx;
 A[1][n-1]=mx-1;
 for(auto& i:A)
 {
    for(auto& j:i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
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

