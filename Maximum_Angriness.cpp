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
      ll int n,k;
      cin>>n>>k;
      ll int sum=0;
      sum=(n*(n-1))/2;
      if(k<n/2)
     {
      ll int x = n-2*k;
      sum-=x*(x-1)/2;
      }
      cout<<sum<<endl;
      
    }
    return 0;
}

