#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>=b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int l;
      string s;
      cin>>l;
      cin>>s;
      int H[26]={0};
      fr(i,0,l,1)
      {
        H[s[i]-97]++;
      }
    int x;
    frrev(i,25,0,1)
    {
        if(H[i]!=0)
        {
          x=i;
          break;
        }
    }  
    cout<<x+1<<endl;
    }
    return 0;
}

