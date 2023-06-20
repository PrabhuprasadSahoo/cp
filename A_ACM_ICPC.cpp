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
    int A[6];
    fr(i,0,6,1)
    {
     cin>>A[i];
    }
    sort(A,A+6);
    if((A[0]+A[2]+A[4])==(A[1]+A[3]+A[5]))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

