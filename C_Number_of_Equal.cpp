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
void solve(int p)
{
 int n,m;
 cin>>n>>m;
 V A(n);
 V B(m);
 V C;
 input(A);
 input(B);
 int c=0;
 int i=0;
 int j=0;
 int t;
 int c1;
 int c2;
while(i<n && j<m)
{
    if(A[i]==B[j])
    {
        t=A[i];
        c1=0;
        c2=0;
    
    while(i<n && A[i]==t)
    {
        i++;
        c1++;
    }
    while(j<m && B[j]==t)
    {
        j++;
        c2++;
    }
    c+=(c1*c2);
    }
    else if(A[i]<B[j])
    i++;
    else
    j++;
    
}
 cout<<c;
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

