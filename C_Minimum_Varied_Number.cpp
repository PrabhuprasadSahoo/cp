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
      int s;
      cin>>s;
      vector<int>V;
      int i=9;
      while(s>0 && i>0)
      {
        if(s<9 && s>0 && i>s)
        {
            V.push_back(s);
        }
        else
        V.push_back(i);
        s-=i;
        i--;
      }  
      reverse(V.begin(),V.end());
      for(auto&i :V)
      cout<<i;
      cout<<endl;
    }
    return 0;
}

