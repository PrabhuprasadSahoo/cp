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
 string s;
 cin>>s;
 int c1=(n-11)/2;
 int c2=c1;
 string s1="";
 for(int i=0;i<n;i++)
 {
    if(s[i]=='8')
    {
        if(c1>0)c1--;
        else s1+=s[i];
    }
    else
    {
        if(c2>0)c2--;
        else s1+=s[i];
    }
 }
 if(s1[0]=='8')
 YES;
 else
 NO;
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

