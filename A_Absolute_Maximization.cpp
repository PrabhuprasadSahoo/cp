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
      int min;
      int max;
      vector<int>A;
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        A.push_back(x);
      }  
      min=A[0];
      max=A[0];
      fr(i,1,n,1)
      {
        min&=A[i];
        max|=A[i];
      }
      cout<<max-min<<endl;

    }
    return 0;
}

