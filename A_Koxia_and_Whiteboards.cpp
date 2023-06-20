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
        int n,m;
        cin>>n>>m;
        vector<int>a;
        vector<int>b;
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        ll int sum=0;
        fr(i,0,m,1)
        {
            int x;
            cin>>x;
            sort(a.begin(),a.end());
            a[0]=x;
        }
        fr(i,0,n,1)
        sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}

