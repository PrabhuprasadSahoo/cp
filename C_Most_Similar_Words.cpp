#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
int cost(string a,string b,int k)
{
    int s=0;
    fr(i,0,k,1)
    s+=abs(a[i]-b[i]);
    return s;
}
void solve(int t)
{
 int n,k;
 cin>>n>>k;
 vector<string>S(n);
 fr(i,0,n,1)
 {
   cin>>S[i];
 }
 int mn=INT_MAX;
 fr(i,0,n,1)
 {
    fr(j,i+1,n,1)
    {
        mn=min(mn,cost(S[i],S[j],k));
    }
 }
 cout<<mn<<endl;
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

