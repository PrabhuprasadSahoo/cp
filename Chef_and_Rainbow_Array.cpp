#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(a,b,c,k) for(ll int a=b;a<=c;a=a+k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
        ll int A[n];
        fr(i,0,n,1)
        {
           cin>>A[i];
        }
        int midindx;
        if(n%2==0)
        midindx=n/2;
        else
        midindx=n/2+1;
        int f1=0;
        int f2=0;
        if(A[midindx]!=7){
        cout<<"no\n";
        }
        else
        {
            fr(i,0,n/2,1){
                if(A[i]!=A[i+1] || A[i]!=A[i]+1){
                f2=1;
                break;
                }
            }
            fr(i,0,n/2,i){
                if(A[i]!=A[n-i-1]){
                f1=1;
                break;
                }
            }
           if(f1==1 || f2==1)
           cout<<"no\n";
           else
           cout<<"yes\n";
        }
    }
    return 0;
}

