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
    int x=0;
    while(t--)
    {
       string s;
       cin>>s;
       if(s.find("++")!=string::npos) 
       x++;
       else if(s.find("--")!=string::npos)
       x--;
    }
    cout<<x<<endl;
    return 0;
}

