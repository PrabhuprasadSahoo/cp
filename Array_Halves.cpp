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
        vector<int>P;
        fr(i,0,2*n,1)
        {
            int x;
            cin>>x;
            P.push_back(x);
        }
        int c=0;
        vector<int>L;
        vector<int>R;
        fr(i,0,2*n,1)
        {
           if(P[i]>n && i<n)
           L.push_back(i+1);
           if(P[i]<=n && i>=n)
           R.push_back(i+1);
        }
        sort(L.begin(),L.end());
        sort(R.begin(),R.end());
        //for(auto& r:L)
        //cout<<r<<" ";
        fr(i,0,L.size(),1)
        {
            c+=(R[i]-L[i]);
        }
        cout<<c<<endl;
    }
    return 0;
}

