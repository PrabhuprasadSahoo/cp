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
      string s;
      cin>>n;
      cin>>s;  
      map<pair<char,int>,int>mp;
      char ch=s[0];
      int l=1;
      mp[{ch,l}]++;
      fr(i,1,n,1)
      {
         if(s[i]!=ch)
         {
            l=1;
            ch=s[i];
         }
         else
         l++;
         mp[{ch,l}]++;           
      }
      int M=0;
      for(auto& i:mp)
      {
        if(i.second==1)
        {
            M=max(M,i.first.second-1);
        }
        else{
            M=max(M,i.first.second);
        }
      }
      cout<<M<<endl;
    }
    return 0;
}

