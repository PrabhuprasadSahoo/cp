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
    int f;
    fr(i,0,s.length(),1)
    {
        if(s[i]=='0')
        {
          f=i;
          break;
        }
    }
    fr(i,0,s.length(),1)
    {
        if(i==f)
        continue;
        else
        cout<<s[i];
    }
    return 0;
}

