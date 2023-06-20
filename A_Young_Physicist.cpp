#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int A[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        cin>>A[i][j];
    }
    int x=0;
    int y=0;
    int z=0;
    
        for(int j=0;j<n;j++)
        {
           x+=A[j][0];
           y+=A[j][1];
           z+=A[j][2];
        }
    
    if(x==0 && y==0 && z==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}

