#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>X;
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            X.push_back(x);
        }
        sort(X.begin(),X.end());
        if(X[0]==X[n-1])
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            reverse(X.begin(),X.end());
            swap(X[1],X[n-1]);
            for(auto& i:X)
            cout<<i<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

