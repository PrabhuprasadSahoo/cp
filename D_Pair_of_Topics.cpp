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
 V A(n);
 V B(n);
 input(A);
 input(B);
 V C(n);
 fr(i,0,n,1)
 {
    C[i]=A[i]-B[i];
 }
 sort(C.begin(),C.end());
 ll c=0;
 fr(i,0,n,1)
 {
    if(C[i]<=0)continue;
    int p=lower_bound(C.begin(),C.end(),-C[i]+1)-C.begin();
    c+=(i-p);
 }
 cout<<c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

