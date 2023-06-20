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
 ll int x;
 cin>>x;
 if(x==0)
 cout<<"1 3 4 5"<<endl;
 ll int ans[4]={};
 ans[0]=ans[1]=ans[2]=x;
 int j=0;
 fr(i,0,60,1)
 {
  if(!(x &(1ll<<i)))
  {
    ans[j]+=(1ll<<i);
    if(j==2)
    ans[3]+=(1ll<<i);
    j++;
    j%=3;
  }
 }
 fr(i,0,4,1)
 {
    assert(ans[i]!=0);
    fr(j,i+1,4,1)
    {
        assert(ans[i]!=ans[j]);
    }
 }
 int val =((ans[0] & ans[1])|ans[2])^ans[3];
 assert(val==x);
 if(ans[3]==0)
 cout<<"-1\n";
 else{
    for(auto i :ans)
    cout<<i<<" ";
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

