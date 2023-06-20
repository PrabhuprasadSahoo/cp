#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    ll int A[n];
    ll int ini=0;
    ll int c=0;
    ll int sum=0;
    fr(i,0,n,1)
    {
       cin>>A[i];
    }
    ll int i=0;
    while(i<=n)
    {
       if(A[ini]==A[i])
       {
       c++;
       }
       else{
       sum+=c*(c+1)/2;
       c=0;
       ini=i;
       i--;
       }
       i++;
    }
    cout<<sum;
    return 0;
}

