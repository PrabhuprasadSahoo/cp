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
        ll int n,q;
        cin>>n>>q;
        vector<ll int>A(n);
        int oc=0;
        int ec=0;
         ll int sum=0;
        for(auto &i:A)
        {
        cin>>i;
        sum+=i;
        if(i%2==0)ec++;
        else oc++;
        }
        while(q--)
        {
            ll int t;
            ll int x;
            cin>>t>>x;                       //o o         e e         o e
            if(t==0)
            {
                sum+=ec*x;
                if(x%2==1)
                {
                oc=n;
                ec=0;
                }
            }
            else{
                sum+=x*oc;
                if(x%2==1)
                {
                ec=n;
                oc=0;
                }
            }
            cout<<sum<<endl;
            
        }
    }
    return 0;
}

