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
    int l=s.length();
    int lc=0;
    int uc=0;
    string str;
    fr(i,0,l,1)
    {
        if(s[i]>=65 && s[i]<=90)
        uc++;
        else
        lc++;
    }
    if(lc>=uc)
    {
      fr(i,0,l,1)
      {
        if(s[i]>=65 && s[i]<=90)
        str.push_back(s[i]+32);
        else
        str.push_back(s[i]);
      }
    }
    else
    {
        fr(i,0,l,1)
      {
        if(s[i]>=97 && s[i]<=122)
        str.push_back(s[i]-32);
        else
        str.push_back(s[i]);
      }
    }
    for(auto& i : str)
    {
        cout<<i;
    }
    return 0;
}

