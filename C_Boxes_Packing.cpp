#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>M;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        M[x]++;
    }
    int ans=0;
    for(auto& i:M)
    {
        ans=max(ans,i.second);
    }
    cout<<ans;
    return 0;
}

