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
ll int digcnt(ll int a)
{
    ll int c=0;
    while(a>0)
    {
        c++;
        a/=10;
    }
    return c;
}
void solve(int t)
{
 ll int n;
 cin>>n;
 ll int i=1;
 ll int a=0;
 ll int b=0;
 ll int r;
 while(n>0)
{
 r=n%10;
 if(r%2==1)
{
    r/=2;
    if(a<=b)
    {
        a+=(i*(r+1));
        b+=(i*r);
    }
    else
    {
        b+=(i*(r+1));
        a+=(i*r);
    }
}
else{
    r/=2;
    a+=(i*r);
    b+=(i*r);
}
i*=10;
n/=10;
}
cout<<a<<" "<<b<<endl;  
}  
int main()  
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    //t=1;
    for(int i=1;i<=t;i++)
    {
       solve(i);
    }
    return 0;
}

