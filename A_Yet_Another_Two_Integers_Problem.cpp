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
        ll int a,b;
        cin>>a>>b;
        ll diff=abs(b-a);
        if(diff%10==0)
        cout<<(diff/10)<<endl;
        else
        cout<<((diff/10)+1)<<endl;
    }
    return 0;
}

