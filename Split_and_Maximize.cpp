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
        int n;
        cin>>n;
        long long int c;
        long long int sum=0;
        fr(i,0,n,1)
        {
            cin>>c;
            sum+=c;
        }
        sum=((sum%998244353)*((sum-1)%998244353))% 998244353;
        cout<<sum<<endl;
        
        
    }
    return 0;
}

