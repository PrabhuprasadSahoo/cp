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
        string S="Timur";
        sort(S.begin(),S.end());
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s==S)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}

