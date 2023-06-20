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
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        fr(i,0,n,1)
        {
            if(s1[i]=='B' || s1[i]=='G')
            s1[i]='K';
            if(s2[i]=='B' || s2[i]=='G')
            s2[i]='K';
        }
        if(s1==s2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}

