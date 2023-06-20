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
        ll int k=1;
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            k*=x;
        }
        k+=n-1;
        cout<<k*2022<<endl;
    }
    return 0;
}

