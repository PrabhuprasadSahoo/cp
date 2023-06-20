#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    int f=0;
    fr(i,0,s.length(),1)
    {
        mp[s[i]]++;
    }
    for(auto& i:mp)
    {
        if(i.second%n!=0)
        {
           f=1;
           break;
        }
    }
    if(f==1)
    {
        cout<<"-1";
    }
    else
    {
        string str;
        for(auto& v:mp)
        {
          fr(i,0,v.second/n,1)
          str.push_back(v.first);
        }
        fr(i,0,n,1)
        cout<<str;
    }

    return 0;
}

