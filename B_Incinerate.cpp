#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
vector<int> func(vector<int>A,int k,int n)
{
   
    
}
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
      vector<int>H;
      vector<int>P;
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        H.push_back(x);
      }  
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        P.push_back(x);
      }
      sort(P.begin(),P.end());
      int itr=0;
        while(k>0)
        {
           fr(i,0,n,1)
           {
           if(H[i]-k<0)
           H[i]=0;
           else
            H[i]-=k;
          }
          k-=P[itr];
          itr++;
        }
      int c=0;
      fr(i,0,n,1){
      if(P[i]==0)
      c++;
      }
      if(c==n)
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }
    return 0;
}

