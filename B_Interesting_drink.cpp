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
    vector<int>A;
    fr(i,0,n,1)
    {
      int x;
      cin>>x;
      A.push_back(x);
    } 
    sort(A.begin(),A.end());
    int q;
    cin>>q;
    while(q--)
    {
      int m;
      cin>>m;
      cout<<upper_bound(A.begin(),A.end(),m)-A.begin()<<endl;
    }
    return 0;
}

