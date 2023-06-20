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
 string s1,s2,s3;
 cin>>s1>>s2>>s3;
 s1+=s2;
 sort(s1.begin(),s1.end());
 sort(s3.begin(),s3.end());
 if(s1==s3)YES;
 else NO;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int t;
    //cin>>t;
    //for(int i=1;i<=t;i++)
    //{
       solve(1);
    //}
    return 0;
}

