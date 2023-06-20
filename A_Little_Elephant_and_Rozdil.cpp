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
    int c;
    int m=INT_MAX;
    int indx;
    fr(i,0,t,1)
    {
       int p;
       cin>>p;
       if(p==m)
       {
        c=1;
       }
       else if(p<m)
       {
        m=p;
        indx=i;
        c=0;
       }
       }
    if(c==1)
    cout<<"Still Rozdil";
    else
    cout<<indx+1;
    return 0;
}

