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
      int n;
    cin>>n;
    vector<int>A;
    fr(i,0,n,1)
    {
        int k;
        cin>>k;
        A.push_back(k);
    }
    sort(A.begin(),A.end());
    int f=0;
    fr(i,1,n,1)
    {
        if((A[i]-A[i-1])>1)
        {
          f=1;
          break;   
        }
    }
    if(f==1)
    cout<<"NO\n";
    else
    cout<<"YES\n";
         
    }
    return 0;
}

