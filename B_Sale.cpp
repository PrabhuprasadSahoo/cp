#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>A;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        A.push_back(x);
    }
    sort(A.begin(),A.end());
    int s=0;
    fr(i,0,m,1)
    {
        if(A[i]>=0)
        {
            break;
        }
        else
        {
            s+=abs(A[i]);
        }
    }
    cout<<s;

    return 0;
}

