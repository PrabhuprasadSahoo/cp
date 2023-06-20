#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int A[26]={0};
    int l=s.length();
    fr(i,0,l,1)
    {
        A[s[i]-97]++;
    }
    int o=0;
    fr(i,0,26,1)
    {
        if(A[i]%2==1)
        o++;
    }
    if(o==0)
    {
        cout<<"First";
    }
    else{
    if(o%2==1)
    cout<<"First";
    else
    cout<<"Second";
    return 0;
}
}
