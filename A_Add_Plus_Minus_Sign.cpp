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
      string s;
      cin>>s;
      int c1=0;
      fr(i,0,n,1)
      {
        if(s[i]=='1')
        c1++;
      }
      fr(i,1,n,1)
      {
        if(s[i]=='0')
        cout<<"+";
        else
        {
            if(c1%2==0)
            cout<<"-";
            else
            cout<<"+";
            c1--;
        }
      }
      cout<<endl;
    }
    return 0;
}

