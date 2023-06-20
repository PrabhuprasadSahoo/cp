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
V PS(200000);
void solve(int t)
{
 int n;
 cin>>n;
 if(n==1)
 {
    cout<<"1\n";
    return;
 }
 if(n&1)
 {
    cout<<"-1\n";
    return;
 }
 cout<<n<<" ";
 for(int i=n-1;i>=3;i-=2)
 {
    cout<<i<<" "<<(n+1-i)<<" ";
 }
 cout<<"1";
 cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    PS[0]=1;
    fr(i,1,200000,1)
    PS[i]=PS[i-1]+(i+1);
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    
    return 0;
}

