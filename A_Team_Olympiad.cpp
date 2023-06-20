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
      vector<int>N1;
      vector<int>N2;
      vector<int>N3;
      for(int i=1;i<=n;i++)
      {
        int x;
        cin>>x;
        if(x==1)
        N1.push_back(i);
        else if(x==2)
        N2.push_back(i);
        else if(x==3)
        N3.push_back(i);
      }  
      int mini=min(N1.size(),min(N2.size(),N3.size()));
      cout<<mini<<endl;
      for(int i=0;i<mini;i++)
      {
        cout<<N1[i]<<" "<<N2[i]<<" "<<N3[i]<<endl;
      }
    return 0;
}

