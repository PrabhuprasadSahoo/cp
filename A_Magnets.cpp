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
    int c=1;
    int p;
    cin>>p;
    fr(i,0,n-1,1)
    {
        int x;
        cin>>x;
        if(x!=p)
        {
            p=x;
            c++;
        }
    }
    cout<<c;
    return 0;
}

