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
        vector<int>A(n);
        for(auto& i:A)
        cin>>i;
        fr(i,0,n-2,1)
        {
            if(A[i]==A[i+2] && A[i]!=A[i+1])
            {
                cout<<i+1+1<<endl;
                break;
            }
        }
        if(A[0]!=A[1] && A[1]==A[2])
        cout<<"1"<<endl;
        if(A[n-1]!=A[n-2] && A[n-2]==A[n-3])
        cout<<n<<endl;
    }
    return 0;
}

