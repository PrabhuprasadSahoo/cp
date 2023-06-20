#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n,m;
    cin>>n>>m;
    ll int A[m];
    for(int i=0;i<m;i++)
    cin>>A[i];
    ll int sum=A[0]-1;
    for(int i=1;i<m;i++)
    {
        if(A[i]<A[i-1])
        sum+=(n-A[i-1]+A[i]);
        else if(A[i]>A[i-1])
        sum+=A[i]-A[i-1];
    }
    cout<<sum;
    return 0;
}

