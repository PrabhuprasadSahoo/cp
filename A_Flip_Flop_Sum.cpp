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
        int sum=0;
        for(auto &i:A){
        cin>>i;
        sum+=i;
        }
        int ans = -1e9;
 
        for(int i=0;i<n-1;i++)
        {
            if(A[i] == A[i+1]) {
                if(A[i] == 1) ans = max(ans, sum-4);
                else ans = max(ans, sum+4);
            }
            else
                ans = max(ans, sum);
        }
        cout<<ans<<endl;   

    }
        
    
    return 0;
}


