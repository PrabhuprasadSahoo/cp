#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int i=0;i<=max(m,n);i++)
    {
        for(int j=0;j<=max(m,n);j++)
          if(i*i+j==n && j*j+i== m)
          c++;
    }
    cout<<c;
    return 0;
}

