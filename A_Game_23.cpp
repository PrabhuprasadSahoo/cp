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
 int n,m;
 cin>>n>>m;
 if(m%n!=0)
 cout<<"-1\n";
 else
 {
   int k=m/n;
   int c2=0;
   int c3=0;
   while(k%3==0)
   {
     c3++;
     k/=3;
   }
   while(k%2==0)
   {
    c2++;
    k/=2;
   }
   if(k!=1)
    cout<<"-1\n";
    else
    cout<<c3+c2<<endl;
 }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    //cin>>t;
    t=1;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

