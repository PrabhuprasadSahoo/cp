#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
bool isPrime(ll int n)
{
   
    if (n <= 1)
        return false;
    for (ll int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll int x;
        cin>>x;
        ll int y=sqrt(x);
        if(isPrime(y))
        {
        if(y*y==x)    
        cout<<"YES\n";
        else
        cout<<"NO\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}

