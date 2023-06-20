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
 int l=s.length();
 int q=0;
 int f=0;
 int z=0;
 if(s[0]=='?')
 f=1;
 if(s[0]=='0')
 z=1;
 fr(i,0,l,1)
 {
    if(s[i]=='?')
    q++;
 }
 if(z==1)
 {
    cout<<"0\n";
 }
 else if(f==1)
 {
    cout<<9*pow(10,q-1)<<endl;
 }
 else
 {
    cout<<pow(10,q)<<endl;
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

