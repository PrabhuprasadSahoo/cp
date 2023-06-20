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
 ll int n;
 cin>>n;
 V A(n);
 V B(n);
 input(A);
 input(B);
 ll int addy=0;
 ll int om=0;
 ll int l1=0;
 ll int l2=0;
 for(int i=0;i<n;i++)
 {
    if(A[i]==0)
    {
        om=max(om,l1);
        l1=0;
    }
    else
    {
        l1++;
    }
 }
 for(int i=0;i<n;i++)
 {
    if(B[i]==0)
    {
        addy=max(addy,l2);
        l2=0;
    }
    else
    {
        l2++;
    }
 }
 addy=max(addy,l2);
 om=max(om,l1);
 if(addy>om)
 cout<<"Addy\n";
 else if(om>addy)
 cout<<"Om\n";
 else
 cout<<"Draw\n";
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

