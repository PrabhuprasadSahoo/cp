#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int x=a1*a2/a3;
    int y=a2*a3/a1;
    int z=a3*a1/a2;
    cout<<(4*(sqrt(x)+sqrt(y)+sqrt(z)));
    return 0;
}

