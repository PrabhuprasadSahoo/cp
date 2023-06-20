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
        vector<int>V;
        //map<int,int>mp;
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            V.push_back(x);
        }
        sort(V.begin(),V.end());
        int ans;
        if(V[0]!=0)
        ans=1;
        else
        ans=0;
        fr(i,0,n,1)
        {
          if(V[i]<=i && (i==n-1 || V[i+1]>i+1))
          ans++;
        }
        cout<<ans<<endl;

       

    }
    return 0;
}

