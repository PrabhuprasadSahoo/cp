#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<=b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<"I hate ";
    if(n>1){
    fr(i,2,n,1)
    {
        if(i%2==0)
        cout<<"that I love ";
        else
        cout<<"that I hate ";
    }
    }
    cout<<"it";
    return 0;
}

