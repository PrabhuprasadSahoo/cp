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
        
        ll int n;
        cin>>n;
        vector<int>A(n);
        ll int oc=0;
        for(auto &i:A)
        {
            cin>>i;
            if(i==1)
            oc++;
        }
        sort(A.begin(),A.end());
        ll int c=0;
      //  ll int count=0;
        ll int p;
        if(oc==0)
        {
            int x=(A[0]-1);
            A[0]-=x;
            c+=x;
        }
        fr(i,0,n-1,1)
        {
            if((A[i+1]-A[i])>1)
            {
                p=A[i+1]-A[i]-1;
                c+=p;
                A[i+1]-=p;
                //count++;
            }
        }
        cout<<c<<endl;
    

    }
    return 0;
}

