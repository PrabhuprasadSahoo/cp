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
    int x;
    int c5=0;
    int c0=0;
    while(t--)
    {
        cin>>x;
        if(x==5)
        c5++;
        else if(x==0)
        c0++;
    }
    int l=c5-c5%9;
    if((c5/9)>0 && c0!=0)
    {
        fr(i,0,l,1)
        cout<<"5";
        fr(i,0,c0,1)
        cout<<"0";
    }
    else if((c5/9)==0 && c0!=0)
    {
        cout<<"0";
    }
    else
    cout<<"-1";
    return 0;
}

