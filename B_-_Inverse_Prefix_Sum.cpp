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
    fr(i,0,n,1)
    cin>>A[i];
    cout<<A[0]<<" ";
    fr(i,1,n,1)
    {
        cout<<A[i]-A[i-1]<<" ";
    }
    return 0;
}

