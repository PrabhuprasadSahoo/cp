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
 string n;
 cin>>n;
 int s1=0;
 int s2=0;
 fr(i,0,3,1)
 {
    s1+=n[i];
 }
 fr(i,3,6,1)
 {
    s2+=n[i];
 }
 if(s1==s2)
 YES;
 else
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
       solve(t);
    }
    return 0;
}

