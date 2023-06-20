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
    V P(n);
    V C(n);
    int p=0;
    int c=0;
    fr(i,0,n,1)
    {
        cin>>P[i]>>C[i];
    }
    fr(i,0,n,1)
    {
        if(P[i]<p || C[i]<c || C[i]-c>P[i]-p)
        {
            NO;
            return;
        }
        p=P[i];c=C[i];
    }
    YES;
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

