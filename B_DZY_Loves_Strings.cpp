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
 string s;
 cin>>s;
 int k;
 cin>>k;
 int S[26];
 int mx=-1;
 int idx=-1;
 fr(i,0,26,1)
 {
 cin>>S[i];
 if(S[i]>mx)
 {
    mx=S[i];
    idx=i;
 }
 }
 ll int sum=0;
 fr(i,0,s.length(),1)
 {
    sum+=(S[s[i]-'a']*(i+1));
 }
 //cout<<sum;
 for(int i=1;i<=k;i++)
 {
    sum+=(mx*(i+s.length()));
 }
 
 cout<<sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

