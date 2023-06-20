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
      vector<int>A;
      set<int>AA;
      vector<int>B;
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        A.push_back(x);
        AA.insert(x);
      }
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        B.push_back(x);
      }
      map<int,int>mini;
      for(int i=0;i<n;i++)
      {
        if(mini.find(A[i])==mini.end())
        {
            mini[A[i]]=B[i];
            continue;
        }
        mini[A[i]]=min(mini[A[i]],B[i]);
      }
      if(AA.size()<k)
      cout<<"-1"<<endl;
      else{
     vector<int>V;
     for(auto&x:mini)V.push_back(x.second);
     sort(V.begin(),V.end());
     int sum=0;
     fr(i,0,k,1)
     {
        sum+=V[i];
     }
     cout<<sum<<endl;
     }
    }
    return 0;
}

