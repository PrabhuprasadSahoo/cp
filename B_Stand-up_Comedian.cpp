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
      int a1,a2,a3,a4;
      cin>>a1>>a2>>a3>>a4;
      if(a1==0)
    cout<<"1\n";
    else
    cout<<a1+2*min(a2,a3)+min(a1+1,abs(a2-a3)+a4)<<endl;
    }
    return 0;
}

