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
 vector<string>S;
 map<string,bool>A;
 fr(i,0,n,1)
 {
    string k;
    cin>>k;
    S.pb(k);
    A[S[i]]=true;
 }
 string k;
 fr(i,0,n,1)
 {
    bool f=false;
    fr(j,1,S[i].length(),1)
    {
      if(A[S[i].substr(0,j)]==true && A[S[i].substr(j,S[i].length()-j)]==true)
      {
        f=true;
      }
    }
    if(f)k.pb('1');
    else k.pb('0');
 }
 cout<<k<<endl;
 
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

