#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int f=0;
    while(n)
    {
        if( n%10!=1 && n%100 != 14 && n%1000 != 144)
        {
          f=1;
          break;
        }
       
        n/=10;
    }
    if(f==1)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}

