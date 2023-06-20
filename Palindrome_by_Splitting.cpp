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
     //vector<int>diff;
      fr(i,0,n,1)
      cin>>A[i];
      int l=0;
      int h=n-1;
      int c=0;
      while(l<h)
      {
        if(A[l]==A[h])
        {
            l++;
            h--;
        }
        else if(A[l]>A[h])
        {
            A[l]=A[l]-A[h];
            h--;
            c++;
        }
        else
        {
            A[h]=A[h]-A[l];
            l++;
            c++;
        }
      }
      cout<<c<<endl;
        
    }
    return 0;
}

