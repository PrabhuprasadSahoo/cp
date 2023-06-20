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
      int n;
      cin>>n;
      string s="2";
      if(n==1)
      cout<<"-1\n";
      else
      {
        fr(i,0,n-1,1)
        s+='3'; 
        cout<<s<<endl;
      }  
      
    }
    return 0;
}

