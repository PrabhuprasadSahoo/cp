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
void solve(int t)
{
 int n;
 cin>>n;
 if(n<=2)
 NO;
 else{
    YES;
    int k=(n%2==0)?(n/2):(n+1)/2;
    cout<<"1 "<<k<<endl;
    cout<<n-1<<" ";
    for(int i=1;i<=n;i++)
    {
        if(i==k)
        continue;
        cout<<i<<" ";
    }

 }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
   // cin>>t;
   t=1;
    for(int i=1;i<=t;i++)
    {
       solve(i);
    }
    return 0;
}

