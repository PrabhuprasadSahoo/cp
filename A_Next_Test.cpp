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
    vector<int>A;
    int x=1;
    fr(i,0,n,1)
   {
    int x;
    cin>>x;
    A.push_back(x);
   }
  sort(A.begin(),A.end());
  int f;
  fr(i,0,n,1)
  {
    if(A[i]!=x)
    {
        //cout<<x;
        f=1;
        break;
    }
    x++;
  }
  if(f==1)
  {
   cout<<x;
  }
  else
  cout<<A[n-1]+1;
  return 0;
}

