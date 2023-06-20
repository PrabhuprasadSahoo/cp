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
bool sorttt(const pair<ll int,ll int> &a,const pair<ll int,ll int> &b)
{
    if((a.ff+a.ss)<(b.ff+b.ss))
    return true;
}
void solve(int t)
{
 ll int n,k;
 cin>>n>>k;
 V A(n),B(n);
 input(A);
 input(B);
 VP S(n);
 fr(i,0,n,1)
 {
    S[i]={A[i],B[i]};
 }
 sort(S.begin(),S.end(),sorttt);
 ll int c=0;
 for(auto& i:S)
 {
    if(k<=0)
    break;
    
    c++;
    k-=(i.ff+i.ss);
 }
 //output(S);
 //cout<<endl;
 cout<<c<<endl;
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

