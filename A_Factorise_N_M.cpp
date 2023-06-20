#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(ll int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(ll int i=a;i>b;i-=k)
bool isPrime(int x)
{
  int c=0;
  fr(i,1,x+1,1)
  {
    if(x%i==0)
    c++;
  }
  if(c==2)
  return true;
  else
  return false;

}
ll int pr(ll int x)
{
    fr(i,1,x+1,1)
    {
        if(isPrime(i))
        return i;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
        ll int k;
        while(true)
        {
            k=pr(n);
            if(!isPrime(n+k))
            {
                break;
            }
        }
        cout<<k<<endl;

    }
    return 0;
}

