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
        int n;
        cin>>n;
        int AH[26]={0};
        int BH[26]={0};
        string A;
        string B;
        cin>>A;
        cin>>B;
        int t=0;
        int x=0;
        int k=0;
        fr(i,0,n,1)
        {
            AH[(A[i]-97)]++;
            BH[(B[i]-97)]++;
        }
        fr(i,0,26,1)
        {
            t=max(t,min(AH[i],BH[i]));
        }
        cout<<t<<endl;
    }
    return 0;
}

