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
      for(auto& i:A)
      cin>>i;
      sort(A.begin()+1,A.end());
      for(int i=1;i<n;i++)
      {
        if(A[i]>A[0])
        {
            if((A[i]-A[0])%2==0)
            A[0]+=(A[i]-A[0])/2;
            else
            A[0]+=((A[i]-A[0])/2+1);
        }
      }
      cout<<A[0]<<endl;  
    }
    return 0;
}

