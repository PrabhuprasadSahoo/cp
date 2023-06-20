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
    int max=INT_MIN;
    int maxi;
    int min=INT_MAX;
    int mini;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        if(x>max)
        {
            max=x;
            maxi=i;
        }
        if(x<=min)
        {
            min=x;
            mini=i;
        }
    }
    if(mini<maxi)
    {
        cout<<n-mini+maxi-2;
    }
    else
    cout<<n-mini+maxi-1;
    return 0;
}

