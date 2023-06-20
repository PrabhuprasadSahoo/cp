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
 int mn=INT_MAX;
 fr(i,0,26,1)
 {
    int a=0,t=0;
    while(a<l){
    while(a<l && s[a]==i+'a')
    a++;
    int b=a;
    while(b<l && s[b]!=i+'a')
    b++;
    t=max(t,b-a);
    a=b;
    }mn=min(mn,t);
 }
 if(mn==0)
 {
    cout<<"0\n";
    return;
 }
 if(!(mn&(mn-1)))
    cout<<ceil(log2(mn))+1<<endl;
 else
   cout<<ceil(log2(mn))<<endl;

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

