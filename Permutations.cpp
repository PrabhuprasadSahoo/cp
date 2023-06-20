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
 if(n<5)
 {
    if(n==1)
    cout<<"1";
    else if(n==4)
    cout<<"2 4 1 3";
    else
 cout<<"NO SOLUTION\n";
 }
 else
 {
    if(n%2==0)
    {
        for(int i=n;i>0;i-=2)
        cout<<i<<" ";
        for(int j=n-1;j>0;j-=2)
        cout<<j<<" ";
    }
    else
    {
        for(int i=n-1;i>0;i-=2)
        cout<<i<<" ";
        for(int j=n;j>0;j-=2)
        cout<<j<<" ";
    }
 }
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

