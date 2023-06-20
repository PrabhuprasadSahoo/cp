#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>=b;i-=k)
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
    string ans="";
    string st="abcdefghijklmnopqrstuvwxyz";
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            int x=(s[i-2]-'0')*10+(s[i-1]-'0');
            i-=2;
            ans.pb(st[x-1]);
        }
        else
        {
            ans.pb(st[s[i]-'0'-1]);
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
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

