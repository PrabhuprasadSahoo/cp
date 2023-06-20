#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    vector<ll int>A;
    cin>>n;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    ll int sum=0;
    fr(i,0,n,1)
    {
        A[i]=A[i]+mod;
	    sum=(sum+(A[i]))%mod;
    }
    ll int q;
    cin>>q;
    fr(i,0,q,1)
    {
       int x;
       cin>>x;
       
	    sum = (((sum)%mod)*2)%mod;
	    cout<<sum%mod<<endl;
    }
    

    return 0;

}

