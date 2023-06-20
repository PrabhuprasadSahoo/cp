#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>a,b;
        fr(i,0,n,1)
        b[s[i]]++;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            a[s[i]]++;
            b[s[i]]--;
            if(b[s[i]]==0)b.erase(s[i]);
            ll as=a.size();
            ll bs=b.size();
            ans=max(ans,(as+bs));
        }
            
        cout<<ans<<endl;
    }
    return 0;
}

