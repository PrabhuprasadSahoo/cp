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
      vector<int>A(n);
      for(auto &i:A)
      cin>>i;
      sort(A.begin(),A.end());
      bool f=true;
      if(n==1)
      {
        cout<<"YES\n";
      }  
      else
      {
        for(int i=0;i<n-1;i++)
        {
            if(A[i]>=A[i+1])
            {
                f=false;
                break;
            }
        }
        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
      }
    }
    return 0;
}

