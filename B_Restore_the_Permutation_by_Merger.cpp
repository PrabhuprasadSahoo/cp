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
      int x;
      vector<int>V;
      fr(i,0,2*n,1)
      {
        cin>>x;
        if(find(V.begin(),V.end(),x)==V.end())
         V.push_back(x);
      }  
      for(auto& i:V)
      cout<<i<<" ";
      cout<<endl;
    }
    return 0;
}

