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
    vector<ll int>A(n);
    for(auto& i:A)
    {
        cin>>i;
    }
    fr(i,0,n-4,1)
    {
        if((A[i]<A[i+2] && A[i+2]<A[i+1] && A[i+1]<A[i+3]) || (A[i+2]<A[i] && A[i]<A[i+3] && A[i+3]<A[i+1]));
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
}

