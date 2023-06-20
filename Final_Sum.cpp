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
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int A[n];
        int sum=0;
        fr(i,0,n,1){
        cin>>A[i];
        sum+=A[i];
        }
        fr(i,0,q,1)
        {
            int l,r;
            cin>>l>>r;
            if((r-l+1)%2!=0)
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

