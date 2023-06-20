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
    ll int c=0;
    while(t>0)
    {
        if(t%10 == 4 || t%10 ==7){
        c++;
        }
        t/=10;
    }
    if(c==4 || c==7)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

