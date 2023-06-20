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
      vector<int>A(n);
      vector<int>sum;
      sum[0]=0;
      int i=1;
      for(int i=1;i<=n;i++)
      {
      int x;
      cin>>x;
      sum[i]=(sum[i-1]+x);
      }
      int ans=1;
      for(auto& i:sum)
      {
        ans=__gcd(ans,i);
      }
      cout<<ans<<endl;
     }
    return 0;
}

