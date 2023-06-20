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
    set<int>S;
    int p;
    cin>>p;
    fr(i,0,p,1)
    {
        int x;
        cin>>x;
        S.insert(x);
    }
    int q;
    cin>>q;
    fr(i,0,q,1)
    {
        int x;
        cin>>x;
        S.insert(x);
    }
    if(S.size()==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";

    return 0;
}

