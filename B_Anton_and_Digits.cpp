#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int i1=min(k2,min(k5,k6));
    
    int sum=0;
    while(i1--)
    {
        sum+=256;
        k2--;
    }
    int i2=min(k2,k3);
    while(i2--)
    {
        sum+=32;
    }
    cout<<sum;
    return 0;
}

