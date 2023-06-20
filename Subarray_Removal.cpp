#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        int n;
        int c0=0;
        int c1=0;
        int p=0;
        int k;
        cin>>n;
        int A[n];
       for(int i=1;i<=n;i++){
        cin>>A[i-1];
        if(A[i-1]==0)c0++;
        if(A[i-1]==1)c1++;
        k=min(c0,c1);
        c0-=k;
        c1-=k;
        p+=k;
        }
        cout<<((p+c1)/3)<<endl;
    }
    return 0;
}

