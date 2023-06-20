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
      if(n==1 || n==3)
      cout<<"-1"<<endl;
      else if(n%2==0)
      {
        for(int i=n;i>=1;i--)
        cout<<i<<" ";
        cout<<endl;
      }
      else 
      {
         vector<int>A;
         for(int i=1;i<=n;i++)
         A.push_back(i);
         reverse(A.begin(),A.end());
         sort(A.begin()+n/2,A.end());
         for(auto& i:A)
         cout<<i<<" ";
         cout<<endl;
      }
    }
    return 0;
}

