#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    cin>>n;
    double s=0;
    fr(i,0,n,1)
    {
        double x;
        cin>>x;
        s+=x;
    }
    double ans = s/n;
    cout<<ans;
    return 0;
}

