#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<=b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    ll int sum=0;
    if(t%2==0)
    {
      sum=t/2;
    }
    else
    {
      sum=-((t+1)/2);
    }
    cout<<sum;
    return 0;
}

