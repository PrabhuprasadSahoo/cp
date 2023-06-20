#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    fr(p,0,t,1)
    {
        ll int n;
        ll int b;
        cin>>n>>b;
        ll int A[n];
        fr(i,0,n,1)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        ll int c=0;
        fr(i,0,n,1)
        {
            if(A[i]<=b)
            {
                
                c++;
                b-=A[i];
            }
        }
        cout<<"Case #"<<p+1<<":"<<c<<'\n';
    }
    return 0;
}

