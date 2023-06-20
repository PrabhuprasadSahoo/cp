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
 V Q(n-1);
 input(Q);
 V sum(n-1);
 sum[0]=Q[0];
 fr(i,1,n,1)
 sum[i]=sum[i-1]+Q[i];
 //int p=200001;
 V P(n);
 P[0]=200001;
 fr(i,1,n,1)
 {
   P[i]=P[0]+sum[i];
 }
 int mini=*min_element(P.begin(),P.end());
 //cout<<mini;
 bool f1=true;
 fr(i,0,n,1)
 {                                                       
    P[i]-=(mini-1);
 }
 //cout<<f1;
 output(P);
 MP X;
 fr(i,0,n,1)
 {
   X[P[i]]++;
 }
 bool f2=true;
 for(auto &i:X)
 {
    if(i.ss>1)
    {
      f2=false;
      break;
    }
 }
 //cout<<f2;
 //if(f1 && f2)
 //output(P);
 //else
 //cout<<"-1";


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

