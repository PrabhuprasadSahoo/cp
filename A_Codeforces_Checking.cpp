#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string s="codeforces";
    while(t--)
    {
       string k;
       cin>>k;
       if(s.find(k)!=string::npos)
       cout<<"YES\n";
       else
       cout<<"NO\n";
    }
    return 0;
}

