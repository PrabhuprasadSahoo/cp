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
    bool prime[t + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= t; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= t; i += p)
                prime[i] = false;
        }
    }
    int n=0;
    int i=0;
    while(n==t)
    {
        if(prime[i]==true)
        {
            cout<<i<<" ";
            n++;
        }
        i++;
    }
    return 0;
}

