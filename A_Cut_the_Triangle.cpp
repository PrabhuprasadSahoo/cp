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
        int x1,y1;
        int x2,y2;
        int x3,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
       if((y2-y1==0 || y3-y2==0 || y1-y3==0) && (x1-x2==0 || x2-x3==0 || x3-x1==0))
       cout<<"NO\n";
       else
       cout<<"YES\n";
    }
    return 0;
}

