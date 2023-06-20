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
    for(int i=-n;i<=n;++i)
    {
        int p=n-abs(i);
        for(int j=0;j<abs(i);++j)cout<<"  ";
        for(int k=0;k<p;++k)cout<<k<<" ";
        for(int l=p;l>=0;--l)cout<<l<<" ";
        cout<<endl;
    }
    return 0;
}

