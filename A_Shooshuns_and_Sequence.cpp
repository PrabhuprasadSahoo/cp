#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>=b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>A;
    fr(i,0,n,1)
    {
        int a;
        cin>>a;
        A.push_back(a);
    }
    int kval=A[k-1];
    int f=0;
    int c=0;
    fr(i,k,n,1)
    {
        if(A[i]!=kval)
        {
        f=1;
        break;
        }
    }
    frrev(i,k-1,0,1)
    {
       while(A[i]==kval)
       {
        i--;
        c++;
       }
       if(A[i]!=kval)
       break;
    }
    if()
    return 0;

}

