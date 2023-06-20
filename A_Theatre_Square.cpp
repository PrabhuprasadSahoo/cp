#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n,m,a;
    cin>>n>>m>>a;
    ll int x,y;
    if(n%a==0)
    x=n/a;
    else
    x=(n/a)+1;
    if(m%a==0)
    y=m/a;
    else
    y=(m/a)+1;
    cout<<x*y;

    return 0;
}

