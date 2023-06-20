#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int sum;
    sum=min(n*a,((n/m)*b)+min(((n%m)*a),b));
    cout<<sum;
   return 0;
}

