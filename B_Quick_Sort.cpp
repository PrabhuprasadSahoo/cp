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
       int n,k;
       cin>>n>>k;
       vector<int>A(n);
       for(auto& i:A)
       cin>>i;
       int total=0;
       int num=1;
       fr(i,0,n,1)
       {
        if(A[i]==num)
        num++;
        else
        total++;
       }
       cout<<((total+k-1)/k)<<endl;
    }
    return 0;
}

