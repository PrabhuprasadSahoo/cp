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
      string t;
      cin>>s>>t;
      if(t=="a")
      {
        cout<<"1\n";
      }
      else
      {
        ll int l=s.length();
        if(t.find("a")!= string::npos)
        cout<<"-1\n";
        else
        cout<<(ll int)pow(2,l)<<endl;
      }  
    }
    return 0;
}

