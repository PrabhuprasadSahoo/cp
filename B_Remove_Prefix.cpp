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
        int A[n+1];
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
        }
        int k=0;
        for(int i=n;i>=1;i--)
        {
            mp[A[i]]++;
            if(mp[A[i]]>1)
            {
                k=i;
                break;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}

