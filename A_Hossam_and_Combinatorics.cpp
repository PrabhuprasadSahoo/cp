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
      vector<ll int>V;
      fr(i,0,n,1)
      {
        ll int x;
        cin>>x;
        V.push_back(x);
      } 
      sort(V.begin(),V.end());
      ll int m=V[0];
      ll int M=V[n-1];
      ll int cm=0,cM=0;
      if(m==M)
      {
        cout<<n*(n-1)<<endl;
      }
      else{
      fr(i,0,n,1)
      {
        if(V[i]==m)
        cm++;
        if(V[i]==M)
        cM++;
      }
      ll int out=2*cm*cM;
      cout<<out<<endl;
    }
    }
    return 0;
}

