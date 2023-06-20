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
       if(s[1]<s[0])
       cout<<(25*(s[0]-'a')+(s[1]-'a')+1)<<endl;
       else
       cout<<(25*(s[0]-'a')+(s[1]-'a'))<<endl;
    }
    return 0;
}

