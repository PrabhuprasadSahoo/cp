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
        int n,a,b;
        int sum=0;
        int cm=0;
        int cb=0;
        cin>>n>>a>>b;
        while(n>1)
        {
            n/=2;
            cb++;
        }
        sum+=cb*a+(cb-1)*b;
        cout<<sum<<endl;
    }
    return 0;
}

