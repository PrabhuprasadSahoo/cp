#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
vector<int>A(int A[][501],int n,int x,int y)
{
  int d1=0;
  int d2=0;
  int r=0;
  int c=0;
  fr(i,1,n+1,1)
  {
    d1+=A[i][i];
    d2+=A
  }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int A[n+1][n+1];
    int x,y;
    fr(i,1,n+1,1)
    {
        fr(j,1,n+1,1)
        {
        cin>>A[i][j];
        if(A[i][j]==0)
        {
            x=i;
            y=j;
        }
        }
    }



    
    return 0;
}

