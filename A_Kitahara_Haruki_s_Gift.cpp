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
    int h1=0;
    int h2=0;
    fr(i,0,t,1)
    {
        int x;
        cin>>x;
        if(x==100)
        h1++;
        else
        h2+=2;
    }
    if((h1+h2)%2==0 && t>1 )
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;

}

