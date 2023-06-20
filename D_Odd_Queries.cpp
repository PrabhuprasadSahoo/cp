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
 ll int n,q;
 cin>>n>>q;
 V A(n);
 input(A);
 ll int sum=0;
 for(auto&i:A)
 sum+=i;
 V P(n);
 P[0]=A[0];
 fr(i,1,n,1)
 P[i]=(P[i-1]+A[i]);
 ll int p;
 while(q--)
 {
    ll int l,r,k;
    cin>>l>>r>>k;
    ll int s1=P[r-1]-P[l-1]+A[l-1];
    p=sum-s1+(r-l+1)*k;
    if(p%2)
    YES;
    else
    NO;
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

