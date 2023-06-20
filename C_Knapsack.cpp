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
 ll int n,W;
 cin>>n>>W;
 VP A;
 fr(i,0,n,1)
 {
    int x;
    cin>>x;
    A[i]={x,i+1};
 }
 ll int w2 =(int) floor(W/2);
 V S;
 sort(A.begin(),A.end());
 ll int sum=0;
 fr(i,0,n,1)
 { 
    if(sum>=w2 && sum<=W)
    break;
    sum+=A[i].ff;
    S.pb(A[i].ss);
}
cout<<S.size()<<endl;
output(S);
cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(i);
    }
    return 0;
}

