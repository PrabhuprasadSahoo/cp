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
 //int x=(n+1)/2;
 int f=0;
 int p=n;
 int neg=0;
 for(int i=0;i<=(n+1)/2;i++)
 {
    if((neg*(neg-1)+p*(p-1))/2 == k)
    {
        f=1;
        break;
    }
    else
    p--;
    neg++;
 }
 if(f)
 {
    YES;
    fr(i,0,p,1)
    cout<<"1 ";
    fr(i,0,neg,1)
    cout<<"-1 ";
    cout<<endl;
 }
 else
 NO;
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

