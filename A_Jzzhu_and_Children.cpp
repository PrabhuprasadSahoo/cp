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
    int max=INT_MIN;
    int indx;
    int x;
    fr(i,0,n,1)
    {
        
        cin>>x;
        if((x+m-1/m)>=max)
        {
            max=x+m-1/m;
            indx=i;
        }
    }
    cout<<indx+1;
    return 0;
}

