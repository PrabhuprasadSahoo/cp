#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    if(m>n)
    cout<<"-1";
    else
    {
    int div=n/2;
    if(div%m==0)
    cout<<div;
    else
    cout<<div+(max(div,m)%min(div,m));
    }
} 