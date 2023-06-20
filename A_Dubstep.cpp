#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    fr(i,0,s.length(),1)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        cout<<" ";
        i+=2;
        }
        else
        cout<<s[i];
    }
    return 0;
}