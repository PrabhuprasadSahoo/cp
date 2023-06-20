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
      vector<pair<int,int>>V;
      vector<pair<int,int>>X;
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        V.push_back({x,i+1});
        X.push_back({x,i+1});
      }
      int sum=0;
      vector<int>A;
      vector<int>B;
      vector<pair<int,int>>ans;
      sort(V.begin(),V.end());
      fr(i,0,n,1)
      {
        if(V[i].first==X[i].first)
        {
            A.push_back(i);
        }
      }
      fr(i,0,n,1)
      {
        if(find(A.begin(),A.end(),i)==A.end())
        B.push_back(i);
      }
      int s=B.size();
      fr(i,0,s,2)
      {
        sum+=abs(V[B[i]].second-V[B[i+1]].second);
        ans.push_back({V[B[i]].second,V[B[i+1]].second});
      }
      cout<<sum<<endl;
      cout<<s<<endl;
      fr(i,0,s,1)
      {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
      }

    }

    return 0;
}

