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
    int A[26];
    for(int i=0;i<26;i++)
    cin>>A[i];
    int n;
    cin>>n;
    vector<string>S(n);
    input(S);
    map<string,int>mp;
    string a="";
    fr(i,0,n,1)
    {
        fr(j,0,S[i].length(),1)
        {
            a+=A[S[i][j]-'A'];
        }
        mp[a]++;
        a.clear();
    }
    for(auto &i:mp)
    {
        if(i.second>1)
        {
            YES;
            return;
        }
    }
    NO;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
       solve(i);

    }
    return 0;
}

