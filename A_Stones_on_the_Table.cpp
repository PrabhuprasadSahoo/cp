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
    int a;
    int c=0;
    cin>>a>>s;
    for(int i=1;i<=a;i++)
    {
        if(s[i]==s[i-1])
        c++;
    }
    cout<<c;
    return 0;
}

