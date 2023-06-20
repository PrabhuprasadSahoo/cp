#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<int> 
#define VP vector<pair<int,int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(int t)
{
 int n;
 int tm;
 cin>>n>>tm;
 V dr(n);
 V et(n);
 input(dr);
 input(et);
 int mx=0;
 int i=0;
 int ans=-1;
 while(i<n)
 {
   if(et[i]>mx && dr[i]<=tm)
   {
        mx=et[i];
        ans=i+1;
   }
    tm--;
    i++;
    
 }
 cout<<ans<<endl;
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

