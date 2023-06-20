#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)find factors of all number in a given range
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
ll int A[10000001];
ll int N=10000000;
void solve(int t)
{
  ll int c;
  cin>>c;
  int ans=-1;
    for(int i=1;i<=N;i++)
    {
      if(A[i]>c)
      {
        break;
      }
      else if(A[i]==c)
      {
        ans=i;
        break;
      }
    }
    cout<<ans<<endl;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            A[j]+=i;
        }
    }
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

