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
    string s1="hello";
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s1[j])
        j++;
    }
    if(j==5)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}

