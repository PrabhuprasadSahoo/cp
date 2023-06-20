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
    int a,b,c,d;
    while(true)
    {
        n++;
        int i=n;
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        d=(i/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout<<n;
            break;
        }
    }
  
    return 0;
}

