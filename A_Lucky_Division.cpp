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
    if(t%4==0 || t%7==0 || t%44==0 || t%47==0 || t%74==0 || t%77==0 || t%444==0 || t%447==0 || t%474==0 || t%477==0 || t%744==0 || t%747==0 || t%774==0 || t%777==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

