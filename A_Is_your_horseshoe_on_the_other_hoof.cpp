#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int>S;
    fr(i,0,4,1)
    {
        int x;
        cin>>x;
        S.insert(x);
    }
    cout<<4-S.size();
    return 0;
}

