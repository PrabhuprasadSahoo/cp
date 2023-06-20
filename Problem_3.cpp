#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"No\n"
#define YES cout<<"Yes\n"
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
 string s;
 cin>>s;
 int f=1;
 for(int i=0;i<s.length();i++)
 {
    if(i%2==0)
    {
        if(!(s[i]>='a' && s[i]<='z'))
        {
            f=0;
            break;
        }
    }
    else
    {
        if(!(s[i]>='A' && s[i]<='Z'))
        {
            f=0;
            break;
        } 
    }
    

 }
 if(f)
    YES;
    else
    NO;
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

