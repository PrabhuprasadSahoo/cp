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
    vector<int>V;
    int d=-1;
    fr(i,0,7,1)
    {
        int x;
        cin>>x;
        V.push_back(x);
    }
    while(n>0)
    {
        fr(i,0,7,1)
        {
            n-=V[i];
            d=i+1;
            if(n<=0)
            break;
        }
    }
    cout<<d;
    return 0;
}

