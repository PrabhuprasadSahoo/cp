#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(ll int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n,c;
        cin>>n>>c;
        vector<ll int>A(n);
        for(auto &i:A)
        cin>>i;
        fr(i,0,n,1)A[i]+=i+1;
        sort(A.begin(),A.end());
        int k=0;
        fr(i,0,n,1)
        {
            if(c>=A[i]){
            c-=A[i];
            k++;
            }
        }
        cout<<k<<endl; 
    }
    return 0;
}

