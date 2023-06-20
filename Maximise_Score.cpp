#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<int> 
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
    int mn=INT_MAX;
    
    fr(i,0,n,1)
    {
      int mx=0;
      if(i+1<n)
        {
            mx=max(mx,abs(A[i+1]-A[i]));
        }
      if(i-1>=0)
        {
            mx=max(mx,abs(A[i-1]-A[i]));
        }
        mn=min(mn,mx);
    }
    cout<<mn<<endl;
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

