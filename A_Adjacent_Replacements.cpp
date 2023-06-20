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
    vector<int>V;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
       if(x%2==0) 
        V.push_back(x-1);
        else
        V.push_back(x);
    }
    for(auto& i:V)
    cout<<i<<" ";
    return 0;
}

