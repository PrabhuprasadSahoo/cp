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
        int n,H,M;
        cin>>n>>H>>M;
        vector<pair<int,int>>A;
        fr(i,0,n,1)
        {
            int h,m;
            cin>>h>>m;
            A.push_back(make_pair(h,m));
        }
        sort(A.begin(),A.end())
        
    }
    return 0;
}

