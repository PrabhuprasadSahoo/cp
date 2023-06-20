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
       int a,b;
       cin>>a>>b;
       int c=0;
       int s=a+b;
       for(int i=1;i<=s;i++)
       {
        if(s%i==0)
        c++;
       } 
       if(c==2)
       cout<<"Alice\n";
       else
       cout<<"Bob\n";      
    }
    return 0;
}

