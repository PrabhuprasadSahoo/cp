#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(ll int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(ll int i=a;i>b;i-=k)
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
        int A[n];
        int f=0;
        unordered_map<int,int>mp;
        fr(i,0,2*n,1)
        {
            cin>>A[i];
            mp[A[i]]++;
        }
        for(auto x :mp)
        {
          if(x.second>2){
          f=1;
          break;
          }
        }
        if(f==1)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }

    }
    return 0;
}

