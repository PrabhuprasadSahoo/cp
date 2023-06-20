#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int A[n];
    fr(i,0,n,1)
    {
        cin>>A[i];
    }
    int f=A[k-1];
    int c=0;
    fr(i,0,n,1)
    {
        if(A[i]>=f && A[i]>0)
        c++;
    }
    cout<<c;
    return 0;
}

