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
    int c=0;
    while(t--)
    {
     int x;
     int c1=0;
     int c0=0;
     fr(i,0,3,1){
     cin>>x;
     if(x==1)c1++;
     else c0++;
     }
     if(c1>=2)
     c++;
    }
    cout<<c;

    return 0;
}

