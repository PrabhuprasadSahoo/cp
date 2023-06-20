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
        ll int m;
        int dig=0;
        cin>>m;
        ll int n=m;
        while(n>0)
        {
            dig++;
            n/=10;
        }
        double x=pow(10,dig-1);
        cout<<int(m-x)<<endl;
    }
    return 0;
}

