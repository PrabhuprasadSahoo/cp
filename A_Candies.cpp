#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
  ll int t;
  cin>>t;
  while(t--){
   ll int n;
   cin>>n;
   fr(k,2,30,1)
   {
    ll int abc=(pow(2,k)-1);
    if(n%abc==0)
    {
    cout<<n/abc<<endl;
    break;
    }
   }
  }

}
//1 2 3 6 100