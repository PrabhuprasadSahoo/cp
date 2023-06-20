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
      string s;
      cin>>s;
      vector<pair<char,int>>V;
      vector<int>P;
      fr(i,0,2*n,1)
      {
        V.push_back({s[i],i});
      }  
      sort(V.begin(),V.end());
      string A="";
      string B="";
      fr(i,0,2*n,1)
      {
        if(i<n)
        {
            A+=V[i].first;
            P.push_back(V[i].second);      
        }
        else
        {
            B+=V[i].first;
        }
      }
      if(A==B)
      {
        cout<<"-1"<<endl;
        return;
      }
      sort(P.begin(),P.end());
      for(auto& i:P)
      cout<<i<<" ";
      cout<<endl;
    }
    return 0;
}

