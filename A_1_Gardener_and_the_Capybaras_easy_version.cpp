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
        if(s[1]=='a')
        cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2,s.length()-1)<<endl;
        else if(s[1]=='b') 
        cout<<s[0]<<" "<<s.substr(1,s.length()-2)<<" "<<s[s.length()-1]<<endl;
    }
    return 0;
}

