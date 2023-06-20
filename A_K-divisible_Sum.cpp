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
      int n,k;
      cin>>n>>k;
      float ans =ceil(max(n,k)/min(n,k));
      if(n>=k)
      {
        if(n%k==0)
        cout<<"1"<<endl;
        else 
        {
            k=((n/k)+1)*k;
            cout<<(k/n)+1<<endl;
        }
      }
      else 
      {
        if(k%n==0)
        cout<<k/n<<endl;
        else
        cout<<(k/n)+1<<endl;
      }
    }
    return 0;
}

