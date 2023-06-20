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
        int x,y;
        cin>>x>>y;
        if(abs(x-y)>=2)
        c++;
    }
    cout<<c;
    return 0;
}


