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
       int n;
       cin>>n;
       vector<int>A(n);
       for(auto& i:A)
       cin>>i;
       sort(A.begin(),A.end());
       int G = A[0];
       int m = *max_element (A.begin(),A.end());
       for(auto& i:A)
       G=__gcd(G,i);
       cout<<m/G<<endl;
    }
    return 0;
}

