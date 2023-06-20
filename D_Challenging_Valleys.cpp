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
  V A(n);
  input(A);
  //output(A);
  //cout<<endl;
  vector<int>B;
  fr(i,0,n,1)
  {
    int a=A[i];
    B.pb(a);
    while(A[i]==a)
    {
      i++;
    }
    i--;
  }
  //output(B);
  int c=0;
  for(int i=0;i<B.size();i++)
  {
    if((i==0 || B[i]<B[i-1]) && (i==B.size()-1 || B[i]<B[i+1]))
    c++;
  }
  c==1?YES:NO;
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

