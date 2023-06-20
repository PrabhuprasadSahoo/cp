#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string>S(n);
    vector<string>T(m);
    for(auto &i:S)
    cin>>i;  
    for(auto &i:T)
    cin>>i;
    int c=0;
    fr(i,0,n,1)
    {
        if(find(T.begin(),T.end(),S[i].substr(3,3))!=T.end())
        c++;
    }
    cout<<c;
    return 0;
}

