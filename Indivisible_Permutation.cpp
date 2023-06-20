#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"1 ";
        fr(i,3,n+1,1)
        cout<<i<<" ";
        cout<<"2"<<endl;
    }
    return 0;
}

