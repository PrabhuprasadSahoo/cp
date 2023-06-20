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
 ll n=s.size();
 ll c=0;
 fr(i,0,n,1)
 {
    if(s[i]=='1')c++;
 }
 if(c==n)cout<<n*n<<endl;
 else
 {
    ll cm=0,p=0,i=0,c=0;
    while(true)
    {
        if(s[i%n]=='1')c++;
        else
        {
            cm=max(cm,c);
            c=0;
        }
        cm=max(cm,c);
        i++;p++;
        if(p>=n && s[i%n]=='0')break;
    }cm=max(cm,c);
    cout<<((cm+1)*(cm+1))/4<<endl;
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

