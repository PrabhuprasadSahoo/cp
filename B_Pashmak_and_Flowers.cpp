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
    fr(i,0,n,1){
        cin>>A[i];
    }
    sort(A,A+n);
    int diff=A[n-1]-A[0];
    ll int x=0;
    ll int y=0;
    fr(i,0,n,1)
    {
        if(A[i]==A[n-1])
        x++;
        if(A[i]==A[0])
        y++;
    }
    cout<<diff<<" ";
    if(diff==0)
    cout<<n*(n-1)/2;
    else
    cout<<x*y;
    return 0;
}

