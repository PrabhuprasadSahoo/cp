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
        A.push_back(i+1);
        swap(A[1],A[n-1]);
        for(auto& i : A)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

