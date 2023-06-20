#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<=b;i+=k)
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
        int k;
        cin>>n>>k;
        for(int i=0;i<n/2;i++)
        {
            cout<<(n-i)<<" ";
            cout<<(i+1)<<" ";
        }
        if(n%2==1)
        {
            cout<<(n+1)/2<<" ";
        }
        cout<<endl;
    }
    return 0;
}

