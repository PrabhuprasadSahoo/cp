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
 cin>>n;
 V A(n);
 input(A);
 cin>>m;
 V B(m);
 input(B);
 int c=0;
 sort (A.begin(),A.end());
 sort (B.begin(),B.end());
 fr(i,0,n,1)
 {
    fr(j,0,m,1)
    {
        if(abs(A[i]-B[j])<=1)
        {
            B[j]=1000;
            c++;
            break;
        }
    }
 }
 cout<<c;
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
       solve(i);
    }
    return 0;
}

