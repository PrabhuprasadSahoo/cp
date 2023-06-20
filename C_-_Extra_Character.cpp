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
    string t;
    cin>>s;
    cin>>t;
    int f=0;
    fr(i,0,t.length(),1)
    {
        if(s[i]!=t[i])
        {
            f=i;
            break;
        }
    }
    cout<<f+1;

    return 0;
}

