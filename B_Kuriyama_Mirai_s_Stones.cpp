#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    vector<ll int>V;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        V.push_back(x);
    }
    vector<ll int>S;
    vector<ll int>Ds;
    S.push_back(0);
    for(ll int i=1;i<=n;i++)
    S.push_back(V[i-1]+S[i-1]);
    sort(V.begin(),V.end());
    Ds.push_back(0);
    for(ll int i=1;i<=n;i++)
    Ds.push_back(V[i-1]+Ds[i-1]);
    int m;
    cin>>m;
    //for(auto& i:Ds)
    //cout<<i<<" ";
    while(m--)
    {
        ll int t,l,r;
        cin>>t>>l>>r;
        if(t==1)
        {
        cout<<(S[r]-S[l-1])<<endl;
        }
        else
        {
        cout<<(Ds[r]-Ds[l-1])<<endl;
        }
    }
    return 0;
}

//1 2 3 4 5 6
//3 6       1+2+3+4+5+6 - 1+2