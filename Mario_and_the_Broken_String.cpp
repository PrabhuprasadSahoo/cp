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
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1=s.substr(0,n/2);
        string s2=s.substr(n/2,n/2);
        if(s1.compare(s2)==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}

