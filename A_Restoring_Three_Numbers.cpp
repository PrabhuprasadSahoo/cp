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
 int A[4];
 fr(i,0,4,1)
 cin>>A[i];
 sort(A,A+4);
 fr(i,0,3,1)
 {
    cout<<A[3]-A[i]<<" ";
 }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;
    t=1;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

