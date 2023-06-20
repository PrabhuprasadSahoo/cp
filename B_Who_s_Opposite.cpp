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
        int a,b,c;
        cin>>a>>b>>c;
        int n=2*abs(a-b);
        if(a>n || b>n || c>n)
        cout<<"-1\n";
        else
        {
            if(c>n/2)
            cout<<c-n/2<<endl;
            else
            cout<<c+n/2<<endl;
        }
    }
    return 0;
}

