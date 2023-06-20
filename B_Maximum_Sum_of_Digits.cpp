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
ll int sumofdig(ll int x)
{
    ll int sum=0;
    while(x>0)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    return sum;
}
void solve(int t)
{
 ll int n;
 cin>>n;
 int c=0;
 int p=n;
 while(p>0)
    {
        //sum=sum+(x%10);
        p=p/10;
        c++;
    }
    ll int a=n-((ll int)pow(10,c-1)-1);
    ll int b=abs(n-a);
    //cout<<a<<" "<<b;
 cout<<sumofdig(a)+sumofdig(b);
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
       solve(i);
    }
    return 0;
}

