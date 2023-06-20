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
    vector<int>H;
    vector<int>A;
    fr(i,0,n,1)
    {
        int h,a;
        cin>>h>>a;
        H.push_back(h);
        A.push_back(a);
    }
    int c=0;
    fr(i,0,n,1)
    {
        fr(j,0,n,1)
        {
            if(H[i]==A[j])
            c++;
        }
    }
    cout<<c;
    return 0;
}

