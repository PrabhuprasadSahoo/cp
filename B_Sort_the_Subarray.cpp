#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>=b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<ll> 
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
    V Aa(n);
    input(A);
    input(Aa);
    ll r=0;
    ll l=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=Aa[i])
        {
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]!=Aa[i])
        {
            r=i;
            break;
        }
    }
    ll mn=INT_MAX;
    ll mx=INT_MIN;
    for(int i=l;i<=r;i++)
    {
        mn=min(mn,A[i]);
        mx=max(mx,A[i]);
    }
   if(l>0)
   {
    for(int i=l-1;i>=0&&l>0;i--)
    {
        if(A[i]>mn)
        {
            break;
        }
        else
        {
            l--;
            mn=A[i];
        }
    }
   }
   if(r<n-1)
   {
    for(int i=r+1;i<n&&r<n-1;i++)
    {
        if(A[i]<mx)
        {
            break;
        }
        else
        {
            r++;
            mx=A[i];
        }
    }
   }
    cout<<l+1<<" "<<r+1<<endl;

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

