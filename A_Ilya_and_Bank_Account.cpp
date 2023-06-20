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
int converter(string s)
{
    int x=0;
    if(s[0]=='-')
    {
        for(int i=1;i<s.size();i++)
        {
            x=x*10+(s[i]-'0');
        }
        x*=-1;
    }
    else
    {
         for(int i=0;i<s.size();i++)
        {
            x=x*10+(s[i]-'0');
        }
    }
    return x;
}
void solve(int t)
{
 string s;
 cin>>s;
 string s1=s;
 string s2=s;
 swap(s2[s2.size()-1],s2[s2.size()-2]);
 s1.erase(s1.size()-1);
 s2.erase(s2.size()-1);
 int x=converter(s);
 int y=converter(s1);
 int z=converter(s2);
 //cout<<x<<" "<<y<<" "<<z;
 cout<<max(x,max(y,z));
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

