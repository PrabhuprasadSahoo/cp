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
      ll int n;
      cin>>n;
      vector<ll int>V=primeFactors(n);
      if(V[0]==V[1])
      cout<<V[0]<<" "<<V[2]<<endl;
      else if(V[0]==V[2])
      cout<<V[0]<<" "<<V[1]<<endl;
      else
      cout<<V[1]<<" "<<V[0]<<endl;
    }
    return 0;
}

