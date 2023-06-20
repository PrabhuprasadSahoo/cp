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
        ll int alicew=1;
        n--;
        ll int aliceb=0;
        ll int bobw=0;
        ll int bobb=0;
        //ll int k=-1;
        int i;
        ll int sum=1;
        for(i=2;n>=sum;i++)
        {
          if(i%4==0)
          {
            aliceb+=i/2;
            alicew+=i-i/2;
            n-=i;
          }
           else if(i%4==1)
          {
            aliceb+=i/2;
            alicew+=i-i/2;
            n-=i;
          }
          else if(i%4==2)
          {
            bobw+=i-i/2;
            bobb+=(i/2);
            n-=i;
          }
          else if(i%4==3)
          {
            bobb+=i-i/2;
            bobw+=(i/2);
            n-=i;
          }
          sum++;
        }
        if(i%4==0)
        {
           aliceb+=n/2;
           alicew+=n-n/2;
        }
          else if(i%4==1){
          
           alicew+=n/2;
           aliceb+=n-n/2;
          }
         else if(i%4==2)
          {
           bobb+=n-n/2;
           bobw+=(n/2);
           }
           else if( i%4==3)
          {
           bobw+=n-n/2;
           bobb+=(n/2);
           }
        cout<<alicew<<" "<<aliceb<<" "<<bobw<<" "<<bobb<<endl;
    }
    return 0;
}