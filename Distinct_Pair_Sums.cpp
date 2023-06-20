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
        int l,r;
        cin>>l>>r;
        int x=r-l;
        if(x==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            int k=x*(x+1)/2+2;
            cout<<k<<endl;
        }
    }
    return 0;
}

