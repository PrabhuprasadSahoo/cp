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
      int c=0;
      fr(i,0,n,1)
      {
         int x;
         cin>>x;
         if(x%2)
         c++;
      }  
      cout<<c<<endl;
    }
    return 0;
}

