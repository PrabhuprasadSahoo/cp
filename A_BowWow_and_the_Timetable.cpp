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
    //cout<<l;
    string s1;
    fr(i,0,l,1)
    s1+='0';
    //cout<<s1;
    int c=0;
    for(int i=l-1;i>=0;i-=2)
    {
        s1[i]='1';
        if(s>s1)
        {
            c++;
        }
        s1[i]='0';
    }
    cout<<c;
    return 0;
}

