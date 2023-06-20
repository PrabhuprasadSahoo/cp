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
      int c=0;
      for(auto& i:A)
      {
      cin>>i; 
      if(i==1)
      c++;
      }
      if(c%2!=0)cout<<n-c+(c/2)+1<<endl;
      else cout<<n-c+c/2<<endl;
    }
    return 0;
}

