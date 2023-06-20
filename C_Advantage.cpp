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
        long long int A[n];
        long long int B[n];
        long long int max=INT_MIN;
        fr(i,0,n,1)
        {
            cin>>A[i];
            B[i]=A[i];
            if(A[i]>=max)
            max=A[i];
        }
        sort(B,B+n,greater<int>());
        long long int max1=B[1];
        fr(i,0,n,1)
        {
            if(A[i]==max)
            {
                cout<<(A[i]-max1)<<" ";
            }
            else 
            {
                cout<<(A[i]-max)<<" ";
            }
        }
        cout<<endl;
   }
    return 0;
}

