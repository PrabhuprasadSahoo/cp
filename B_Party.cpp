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
      int n,m;
      cin>>n>>m;
      vector<int>A;
      vector<pair<int,int>>Q;
      int ans=INT_MAX;
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        A.push_back(x);
      }
      fr(i,0,m,1)
      {
        int x;
        int y;
        cin>>x>>y;
        Q.push_back(make_pair(x-1,y-1));
        ans=min(ans,A[x]+A[y]);
      }



    }
    return 0;
}

