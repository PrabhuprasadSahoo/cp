#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<=b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int y,k,n;
    cin>>y>>k>>n;
    int c=0;
    int x;int a;
    a=y/k+1;
    x=a*k-y;
    while(x<=n-y)
    {
        cout<<x<<" ";
        x+=k;
        c++;
    }
    if(c==0)
    cout<<"-1";
    return 0;
}

// x+y<=n
// x<=n-y
// x%k==0
// 11 2 12  y k n