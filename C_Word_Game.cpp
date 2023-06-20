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
        map<string,int>mp;
        string S[3][n];
        fr(i,0,3,1){
        fr(j,0,n,1){cin>>S[i][j];mp[S[i][j]]++;}}
        fr(i,0,3,1)
        {
          int t=0;
          fr(j,0,n,1)
          {
            if(mp[S[i][j]]==1)t+=3;
            else if(mp[S[i][j]]==2)t+=1;
          }
          cout<<t<<" ";
        }
        cout<<endl;

        
    }
    return 0;
}

