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
        ll int alice=1;
        n--;
        ll int bob=0;
        ll int k=-1;
        int i;
        for(i=2;n>0;i++)
        {
            if(i%4==0 || i%4==1)
            {
              alice+=i;
              n-=i;
            }
            else if(i%4==2 || i%4==3)
            {
                bob+=i;
                n-=i;
            }
        }i--;
        if(i%4==0 || i%4==1)
        cout<<alice+n<<" "<<bob<<endl;
        else if(i%4==2 || i%4==3)
        cout<<alice<<" "<<bob+n<<endl;
    }
    return 0;
}

