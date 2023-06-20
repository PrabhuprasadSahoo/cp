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
 ll int n,k,q;
 cin>>n>>k>>q;
 V A(n);
 input(A);
 //output(A);
 ll int c=0;
 ll int ans=0;
 for(int i=0;i<n;i++)
 {
    if(A[i]>q)
    {
        ll int diff=c-k;
        if(diff>=0)
        ans=ans+(((diff+1)*(diff+2))/2);
        c=0;
        //cout<<ans<<" ";
    }
    else{
    c++;
    }
 }
        ll int diff=c-k;
        if(diff>=0)
        ans=ans+(((diff+1)*(diff+2))/2);
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

