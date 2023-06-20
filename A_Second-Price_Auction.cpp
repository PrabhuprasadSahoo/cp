#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int A[n];
    int max=INT_MIN;
    int x;
    fr(i,0,n,1)
    {
        cin>>A[i];
        if(A[i]>max)
        {
            max=A[i];
            x=i;
        }
    }
    sort(A,A+n,greater<int>());
    cout<<x+1<<" "<<A[1];
    return 0;
}

