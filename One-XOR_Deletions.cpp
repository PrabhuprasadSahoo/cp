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
      int A[n];
      int H[n+1]={0};
      fr(i,0,n,1)
      {
      cin>>A[i];
      H[A[i]]++;
      }
      int c=0;
      int k=c;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            c=H[i]+H[i+1];
        }
        if(c>k)
        {
            k=c;
        }
    }
    
    sort(H,H+n+1,greater<int>());
    int x=H[0];
    k=max(k,x);
    cout<<n-k<<endl;
    
    }
    return 0;

}

