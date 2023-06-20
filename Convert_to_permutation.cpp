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
      vector<int>A;
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        A.push_back(x);
      }  
      sort(A.begin(),A.end());
      int f=0;
      int sum=0;
      for(int i=0;i<n;i++)
      {
        if(A[i]<=(i+1))
        {
            sum+=(i+1)-A[i];
        }
        else
        {
            f=1;
            break;
        }
      }
      if(f==1)
      cout<<"-1"<<endl;
      else
      cout<<sum<<endl;
    }
    return 0;
}

