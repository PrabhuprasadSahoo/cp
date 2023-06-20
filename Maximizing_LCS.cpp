#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<=b;i+=k)
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
        string s;
        cin>>s;
        string s1=s;
        string s2=s;
        reverse(s2.begin(),s2.end());
        int D[n+1][n+1];
        fr(i,0,n,1)
        {
           D[0][i]=0;
           D[i][0]=0;
        }
        fr(i,1,n,1)
        {
          fr(j,1,n,1)
          {
            if(s1[i-1]==s2[j-1])
            D[i][j]=D[i-1][j-1]+1;
            else
            D[i][j]=max(D[i][j-1],D[i-1][j]);
          }
        }
        cout<<D[n][n]/2<<endl;
    }
    return 0;
}

