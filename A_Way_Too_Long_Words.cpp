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
        string s;
        cin>>s;
        int l=s.length();
        if(l>10)
        {
            char a=s[0];
            char b=s[l-1];
            cout<<a<<l-2<<b<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}

