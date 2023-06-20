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
        int c=0;
        fr(i,0,n,1)
        {
          string s1=s.substr(i,n);
          if(s.find(s1) != string::npos)
          {
            c++;
          }
          else
          {
            i

          }
        }
    }
    return 0;
}

