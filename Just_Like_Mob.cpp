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
      int n,m,k,x;
      cin>>n>>m>>k>>x;
      if(x%((n*k)+m)==0)
      cout<<"YES\n";
      else if((x%((n*k)+m))-(n*(k-1))>0)
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }
    return 0;
}

