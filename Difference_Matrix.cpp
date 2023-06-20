#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<ll int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(int t)
{
 int n;
 cin>>n;
 int A[n][n];
 if(n%2==1){
  int p=n*n;
  int k=1;
  fr(i,0,n,1)
  {
    fr(j,0,n,1)
    {
      if((i+j)%2==0)
      {
        A[i][j]=p;
        p--;
      }
      else
      {
        A[i][j]=k;
        k++;
      }
    }
  }
  swap(A[0][0],A[n-1][n-1]);
}
else{
    int a=1;
    int b=2;
    fr(i,0,n,1)
    {
        fr(j,0,n,1)
        {
          if(a<=n*n)
          {
            A[i][j]=a;
            a+=2;
          }  
          else
          {
            A[i][j]=b;
            b+=2;
          }
        }
    }
}
  fr(i,0,n,1)
  {
    fr(j,0,n,1)
    {
        cout<<A[i][j]<<" ";
    }
    cout<<"\n";
  }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

