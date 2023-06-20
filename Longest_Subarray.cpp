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
        vector<int>A;
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            A.push_back(x);
        }
        int sum=0;
        int f=0;
        int k=n;
        frrev(i,n-1,0,1)
        {
            if(A[i]>f){
            f=1;
            break;
            }
            else{
                sum+=k-A[i];
                k--;
            }
        }
        if(f==1)
        cout<<"-1"<<endl;
        else
        cout<<sum<<endl;
    }
    return 0;
}

