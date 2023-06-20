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
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 int C[26]={0};
 int S[26]={0};
 fr(i,0,n,1)
 {
    if(s[i]>='A' && s[i]<='Z')
    C[s[i]-'A']++;
    else
    S[s[i]-'a']++;
 }
 int c=0;
    fr(i,0,26,1)
    {
        int x=min(C[i],S[i]);
        c+=x;
        C[i]-=x;
        S[i]-=x;
        int add=min(k,abs(S[i]-C[i])/2);
        k-=add;
        c+=add;
    }
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

