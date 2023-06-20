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
 int ec=0;
 fr(i,0,n,1){
    int x;
    cin>>x;
    if(x%2==0)
    ec++;
 }
 int oc= n-ec;
 if(oc>=ec)
 cout<<ec;
 else
 cout<<oc;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>tA
    t=1;
    for(int i=1;i<=t;i++)
    {
       solve(i);
    }
    return 0;
}

