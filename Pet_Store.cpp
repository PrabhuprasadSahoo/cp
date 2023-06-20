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
        int n;
        cin>>n;
        map<int,int>A;
        int f=0;
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            A[x]++;
        }
        for(auto& i:A)
        {
            if(i.second%2!=0)
            f=1;
        }
        if(f==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}

