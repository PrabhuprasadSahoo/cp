#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,h;
        cin>>n>>h;
        int ans=n;
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            if(x>h)
            ans++;
        }
    cout<<ans;
    return 0;
}

