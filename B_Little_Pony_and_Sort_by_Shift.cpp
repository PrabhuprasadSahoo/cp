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
 V A(n);
 input(A);
 int s=0;
 int p;
 for(int i=0;i<n-1;i++)
 {
    if(A[i]<=A[i+1])
    {
        continue;
    }
    else
    {   
        p=i;
        s++;
    }
 }
 if(A[n-1]>A[0]){p=n-1; s++;}   
 if(s>1)
 cout<<"-1";
 else
 {
    if(s==0)
    cout<<"0";
    else
    cout<<n-p-1;    
 }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

