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
    vector<pair<int,int>>V;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        V.push_back(make_pair(x,i+1));
    }
    sort(V.begin(),V.end());
    for(auto& i:V)
    cout<<i.second<<" ";
    return 0;
}

