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
 ll n;
 cin>>n;
 V A(n);
 input(A);
 ll int l=0;
 ll int r=n-1;
 ll int mx=n;
 ll int mn=1;
 while(r>=l)
 {
    if(A[r]==mx)
    {
     r--;
     mx--;
    }
    else if(A[l]==mx)
    {
        l++;
        mx--;
    }
    else if(A[r]==mn)
    {
        r--;
        mn++;
    }
    else if(A[l]==mn)
    {
        l++;
        mn++;
    }
    else 
    break;
 }
 if(r>=l)
 cout<<l+1<<" "<<r+1<<"\n";
 else
 cout<<"-1"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(i);
    }
    return 0;
}

