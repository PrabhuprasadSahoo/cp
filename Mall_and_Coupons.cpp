#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n,k,x;
    cin>>n>>k>>x;
    vector<ll int>A;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    sort(A.begin(),A.end(),greater<ll int>());
     for(ll int i=0;i<n;i++)
    {
        while(true)
        {
           if(k==0 || (A[i]>0 && A[i]<x))
           break;
           A[i]-=x;
           k--;
        }
    }
    sort(A.begin(),A.end(),greater<ll int>());
    for(ll int i=0;i<n;i++)
    {
        if(k==0)
        break;
        else if(A[i]<=x)
        {
            A[i]=0;
            k--;
        }
    }
    cout<<(ll int)accumulate(A.begin(),A.end(),0);
    return 0;
}