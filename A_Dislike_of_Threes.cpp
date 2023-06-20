#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>A;
    for(int i=1;i<=1000000;i++)
    {
        if(i%3==0 || i%10==3)
        continue;
        else
        A.push_back(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<A[k-1]<<endl;
    }
    return 0;
}

