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
    V B(n);
    fr(i,0,n,1)
    {
        B[i]=A[i];
    }
    sort(B.begin(),B.end());
    if(A==B)
    {

    }
    MP m;
    fr(i,0,n,1)
    {
        m[B[i]]=i;
    }
    int l=0;int r=n-1;
    while(l<n)
    {
        if(m[A[l]]!=l)
        break;
        l++;
    }
    while(r>=0)
    {
        if(m[A[r]]!=r)
        break;
        r--;
    }
    //cout<<l+1<<" "<<r+1;
    reverse(A.begin()+l,A.begin()+r+1);
    fr(i,0,n,1)
    {
        if(A[i]!=B[i]){
        cout<<"no";
        return;
        }
    }
    cout<<"yes\n";
    if(l<n && r>=0)
    cout<<l+1<<" "<<r+1;
    else
    cout<<"1 1";
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

