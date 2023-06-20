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
        vector<int>X;
        fr(i,0,2*n,1)
        {
            int x;
            cin>>x;
            X.push_back(x);                     
        }
        sort(X.begin(),X.end());
         int min=INT_MAX;
        fr(i,0,n,1)
        {
            if(X[n+i-1]-X[i]<=min)
            min=X[n+i-1]-X[i];
        }
        cout<<min<<endl;
    
    }
    return 0;
}

