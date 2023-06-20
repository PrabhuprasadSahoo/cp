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
        ll int n,k,l;
        cin>>n>>k>>l;
        if(n>l*k)
        cout<<"-1\n";
        else
        {
            ll int c=0;
            fr(i,1,n+1,1){
                if(c<k){
                    c++;
                    cout<<c<<" ";
                }
                else
                {
                    c--;
                    cout<<c<<" ";
                }
            }
           cout<<endl;

        }
    }
    return 0;
}

