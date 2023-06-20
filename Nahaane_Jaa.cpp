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
        int n,k;
        cin>>n>>k;
        int A[n];
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]==k && i!=n-1)
            c=1;
        }
        if(n==1 && k==A[0]){
        cout<<"yes\n";
        continue;
        }
        if(c)
        cout<<"Yes\n";
        else
        cout<<"No\n";
        
    }
    return 0;
}

