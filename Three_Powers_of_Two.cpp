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
        int c=0;
        fr(i,0,n,1)
        if(s[i]=='1')c++;
        if(s=="1" || s=="10")
        cout<<"NO\n";
        else if(c<=3)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}

