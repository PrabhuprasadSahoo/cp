#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int M=max(a,max(b,c));
    int m=min(a,min(b,c));
    if(m+(a+b+c-M-m)<M)
    cout<<"Impossible";
    else
    {
      int p=(a+b-c)/2;
      int q=(b+c-a)/2;
      int r=(c+a-b)/2;
      if((p==0 && q==0 || r==0)
      cout<<"Impossible";
      else
      cout<<p<<" "<<q<<" "<<r;
    }
    return 0;
}

