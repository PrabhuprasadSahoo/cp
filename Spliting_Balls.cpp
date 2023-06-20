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
        ll int f[1000001]={0};
        f[0]=1;
        fr(i,1,1000001,1)
        {
        f[i]=(i*f[i-1])%1000000007;
        }
        
        int n;
        cin>>n;
        ll int c;
        ll int sum=0;
        fr(i,0,n,1)
        {
            cin>>c;
            sum=(sum+f[c]%1000000007)%1000000007;
        }
        cout<<(sum%1000000007)<<endl;  
    }
    return 0;
}

