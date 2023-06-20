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
        ll int n;
        cin>>n;
        vector<ll int>A(n);
        ll int sum=0;
        ll int neg=0;
        for(auto &i:A){
        cin>>i;
        sum+=abs(i);
        if(i<0)
        neg++;
        }
         fr(i,0,n,1)
         {
          if(A[i]<0)
          A[i]=abs(A[i]);
         }
        if(neg%2==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            ll int mini=*min_element(A.begin(),A.end());
            cout<<sum-2*mini<<endl;
        }
    }
    return 0;
}

