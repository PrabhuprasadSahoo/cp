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
    int o=0;
    int e=0;
    vector<int>A;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        A.push_back(x);
        if(x%2==0)
        e++;
        else
        o++;
    }
    if(o==1)
    {
        fr(i,0,n,1)
        {
            if(A[i]%2==1)
            {
            cout<<i+1;
            break;
            }
        }
    }
    if(e==1)
    {
        fr(i,0,n,1)
        {
            if(A[i]%2==0)
            {
            cout<<i+1;
            break;
            }
        } 
    }
    return 0;
}

