#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    fr(i,0,n,1)
    {
        fr(j,0,m,1)
        {
            if((i+1)%4==0) 
            {
                if(j>0)
                cout<<".";
                else 
                cout<<"#";
            }
            else if((i+1)%4==2)
            {
                if(j<m-1)
                cout<<".";
                else
                cout<<"#";
            }
            else
            cout<<"#";
        
    }
    cout<<endl;
    }
    return 0;
}

