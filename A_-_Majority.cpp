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
    int f=0;
    int a=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="For")
        f++;
        else if(s=="Against")
        a++;
    }
    if(f>a)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}

