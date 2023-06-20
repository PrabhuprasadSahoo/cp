#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    vector<ll int>A;
    fr(i,0,n,1)
    { 
      ll int x;
      cin>>x;
      A.push_back(x);
    }
    ll sum=0;
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++)
    {
        sum+=abs(A[i]-(i+1));
    }
    cout<<sum;
    return 0;
}

