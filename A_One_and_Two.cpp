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
  int ct2=0;
  for(auto &i:A){
  cin>>i;
  if(i==2)
  ct2++;
  }
  if(ct2%2==1)
  cout<<"-1\n";
  else
  {
  int c=0;
  int i=0;
  if(ct2==0)
  cout<<"1\n";
  else
  {
  while(c!=ct2/2){
    if(A[i]==2)
    c++;
    i++;
  }
  cout<<i<<endl;
  }
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

