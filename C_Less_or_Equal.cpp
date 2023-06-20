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
 int n,k;
 cin>>n>>k;
 V A(n);
 input(A);
 sort(A.begin(),A.end());
 int a;
 if(k==0)
 a=A[0]-1;
 else 
 a=A[k-1];
 int c=0;
 fr(i,0,n,1)
 {
    if(A[i]<=a)c++;
 }
 if(c!=k || !(a>=1 && a<=1000*1000*1000))
 cout<<"-1";
 else
 cout<<a;

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

