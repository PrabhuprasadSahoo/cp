#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
 long long x,n;
cin>>x>>n;
if(n<=(x+1)/2)
    cout<<(n*2)-1;
else
    cout<<((n-((x+1)/2)) *2);


    return 0;
}

