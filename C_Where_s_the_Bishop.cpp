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
    int x=-1;
    int y=-1;
    while(t--)
    {
        char A[8][8];
        fr(i,0,8,1)
        {
          fr(j,0,8,1)
          cin>>A[i][j];
        }
        int c=0;
        fr(i,0,8,1)
        {
          fr(j,0,8,1)
          {
            if(A[i][j]=='#')
            {
              c++;
              x=i+1;
              y=j+1;
            }
          }
          if(c==1)
          {
            break;
          }
          c=0;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}

