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
      int n,x,c;
      cin>>n>>x>>c;
      int A[n];
      int sum=0;
      fr(i,0,n,1){
      cin>>A[i];
      }
      int cost=0;
      fr(i,0,n,1)
      {
        if(A[i]>=x)continue;
        int gain=x-A[i];
        if(gain>c)
        {
          A[i]=x;
          cost+=c;
        }
      }
      fr(i,0,n,1)
      sum+=A[i];
      cout<<sum-cost<<endl;
    }
    return 0;
}

