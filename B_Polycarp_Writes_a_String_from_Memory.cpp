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
      int l=s.length(); 
      int a=1;
      set<int>X; 
      fr(i,0,l,1)
      {
        X.insert(s[i]);
        if(X.size()==4)
        {
          X.clear();
          X.insert(s[i]);
          a++;
        }
      }
      
      cout<<a<<endl;
    }
    return 0;
}
