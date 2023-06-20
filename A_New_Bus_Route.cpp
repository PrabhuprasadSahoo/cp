#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll int>X;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        X.push_back(x);
    }
    sort(X.begin(),X.end());
    ll int diff=INT_MAX;
    int c=0;
    fr(i,1,n,1)
    { 
      if(abs(X[i]-X[i-1])==diff)
      c++;
      else if(abs(X[i]-X[i-1])<diff)
      {
        diff=abs(X[i]-X[i-1]);
        c=1;
      }
    }
    cout<<diff<<" "<<c;
    return 0;
}

