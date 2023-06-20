#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n,m;
        cin>>n>>m;
        ll int A[n];
        ll int H[m+1]={0};
        for(ll int i=0;i<n;i++)
        {
            cin>>A[i];
            H[A[i]]++;
        }
        int f=0;
        for(ll int i=1;i<=m;i++)
        {
            if(H[i]==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }
    return 0;
}

