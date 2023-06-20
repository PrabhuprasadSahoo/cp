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
        vector<ll int>V;
        int c1=0;
        fr(i,0,n,1)
        {
            ll int x;
            cin>>x;
            V.push_back(x);
            if(x==1)
            c1++;
        }
        sort(V.begin(),V.end());
        for(auto& i:V)
        {
            if(i!=1 && i%2==0 && c1>0)
            {
                i++;
                c1--;
            }
        }
        int ll p=1;
        for(auto& i:V)
        {
            p=(p*i)%998244353;
        }
        cout<<p<<endl;
        
    }
    return 0;
}

