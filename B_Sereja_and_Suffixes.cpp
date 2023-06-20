#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>=b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    set<int>S;
    vector<int>V;
    vector<int>A;
    fr(i,0,n,1)
    {
       int n;  
       cin>>n;
       V.push_back(n);
    }
    frrev(i,n-1,0,1)
    {
        S.insert(V[i]);
        A.push_back(S.size());
    }
    fr(i,0,m,1)
    {
        int a;
        cin>>a;
        cout<<A[n-a]<<endl;
    }
    return 0;
}
