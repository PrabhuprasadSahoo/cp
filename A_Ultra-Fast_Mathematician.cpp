#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    string s;
    fr(i,0,a.length(),1)
    {
        if(a[i]==b[i])
        s.push_back('0');
        else
        s.push_back('1');
    }
    cout<<s;
    
    return 0;
}

