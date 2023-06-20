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
int OC(int x)
{
    int c=0;
    while(x>0)
    {
        if(x%2==1)
        c++;
        x/=2;
    }
    return c;
}
bool comp(int a,int b)
{
  int c1=OC(a);
  int c2=OC(b);
  if(c1>=c2)
  return true;
  else 
  return false;
}
void solve(int t)
{
 int n;
 cin>>n;
 V A(n);
 input(A);
 stable_sort(A.begin(),A.end(),comp);
 output(A);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;
    t=1;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

