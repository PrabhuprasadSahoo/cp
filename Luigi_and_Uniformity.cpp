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
        int A[n];
        int min=INT_MAX;
        fr(i,0,n,1){
        cin>>A[i];
        if(A[i]<min)
        min=A[i];
        }
        
       
        int x=0;
        int t=0;
        fr(i,0,n,1)
        {
            if(A[i]!=min){
                if(A[i]%min==0)
                x++;
                else{
                    t=1;
                    break;
                }
            }
            
        }
        if(t==1)
        cout<<n<<endl;
        else
        cout<<x<<endl;
        
    }
    return 0;
}

