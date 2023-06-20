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
        ll int n,s;
        cin>>n>>s;
        ll int x,p,diff;
        if(n>s){
            x=s;
            p=0;
            diff=abs(x-p);
        }
        else{
            x=n;
            p=s-n;
            diff=abs(x-p);
        }
       cout<<diff<<endl;
    }
    return 0;
}

