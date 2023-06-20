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
        if(n==3)
        cout<<"NO\n";
        else
        {
            if(n%2==0){
            cout<<"YES\n";
            fr(i,0,n,1)
            {
                if((i+1)%2==0)
                cout<<"-1 ";
                else
                cout<<"1 ";
            }
            cout<<endl;
            }
            else
            {
              cout<<"YES\n";
              int k=n/2;
              fr(i,0,n,1)
              {
                if((i+1)%2==0)
                cout<<"-"<<k<<" ";
                else
                cout<<k-1<<" ";
              }
              cout<<endl;
            }
        }
    }
    return 0;
}

