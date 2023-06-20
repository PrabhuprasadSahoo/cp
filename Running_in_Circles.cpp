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
        int l,n;
        cin>>l>>n;
        int D[n];
        char C[n];
        int coua=0;
        int couc=0;
        int sum=0;
        fr(i,0,n,1)
        {
            cin>>D[i]>>C[i];
            sum+=D[i];
            if(C[i]=='A')
            coua++;
            if(C[i]=='C')
            couc++;
        }
        if(coua == n || couc == n)
        {
            cout<<sum/l<<endl;
        }
        

    }
    return 0;
}

