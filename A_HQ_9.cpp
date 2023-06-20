#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   string s;
   cin>>s;
   int f=0;
   fr(i,0,s.length(),1)
   {
     if(s[i]==72 || s[i]==81 || s[i]==57)
     {
        f=1;
        break;
     }
   }
   if(f==1)
   cout<<"YES";
   else
   cout<<"NO";
    return 0;
}

