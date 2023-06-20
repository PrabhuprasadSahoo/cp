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
      int n,s,r;
      cin>>n>>s>>r;
      cout<<s-r<<" ";
      fr(i,1,n,1)
      {
        cout<<r/(n-i)<<" ";
        r-=r/(n-i);
      }
      cout<<endl;
    }
    return 0;
}

