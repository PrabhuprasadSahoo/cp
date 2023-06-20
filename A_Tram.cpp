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
    int sum=0;
    int ans=INT_MIN;
    int a,b;
    while(t--)
    {
      cin>>a>>b;
      sum-=a;
      ans=max(ans,sum);
      sum+=b;
      ans=max(ans,sum);
    }
    cout<<ans;
    return 0;
}

