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
        int i=2;
        int f=1;
        while(i*i<=n)
        {
            if(n%i==0 && (i!=(n/i)))
            {
                f=0;
                break;
            }
            i++;
        }
        if(f==1)
        cout<<"-1\n";
        else
        cout<<"1 "<<i<<" "<<n/i<<endl;
        
    }
            
           
    return 0;
}

