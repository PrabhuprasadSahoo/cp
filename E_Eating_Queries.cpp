#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(int t)
{
 int n,q;
 cin>>n>>q;
 V A(n);
 input(A);
 sort(A.begin(),A.end(),greater<int>());
vector<int>P(n+1);P[0]=A[0];
fr(i,1,n,1)
P[i]=P[i-1]+A[i];
while(q--){
   int x;
   cin>>x;
   int ans=-1;
   int l=0;
   int r=n-1;
   while(r>=l)
   {
     int mid=r+(l-r)/2;
     if(P[mid]>=x)
     {
      ans=mid;
      r=mid-1;
     }
     else
     {
      l=mid+1;
     }
   }
   if(ans!=-1)
   cout<<ans+1<<endl;
   else
   cout<<ans<<endl;
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

