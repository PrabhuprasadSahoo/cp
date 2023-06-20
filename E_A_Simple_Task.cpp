#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    char S[n];
    cin>>S;
    while(q--)
    {
        int i,j,k;
        cin>>i>>j>>k;
        if(k==1)
        sort(S+i-1,S+j);
        if(k==0)
        sort(S+i-1,S+j,greater<char>());
    }
    cout<<S;
    return 0;
}

