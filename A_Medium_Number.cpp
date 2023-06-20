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
      int A[3];
      fr(i,0,3,1)
      cin>>A[i];
      sort(A,A+3);
      cout<<A[1]<<endl;  
    }
    return 0;
}

