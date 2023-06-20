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
    char ch=s[0];
    if(ch>=97 && ch<=122)
    {
        s[0]=ch-32;
    }
    cout<<s;
    
    return 0;
}

