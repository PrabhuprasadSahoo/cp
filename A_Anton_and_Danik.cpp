#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=count(s.begin(),s.end(),'A');
    int d=n-a;
    if(a>d)
    cout<<"Anton";
    else if(a<d)
    cout<<"Danik";
    else
    cout<<"Friendship";
    return 0;
}

