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
        int A[n];
        int H[11]={0};
        fr(i,0,n,1){
        cin>>A[i];
        H[A[i]]++;
        }
        int max=0;
        int k;
        fr(i,0,11,1)
        {
          if(H[i]>max){
          max=H[i];
          k=i;
          }
        }
        sort(H,H+10,greater<int>());
        if(H[0]==H[1])
        cout<<"CONFUSED\n";
        else
        cout<<k<<endl;
    }
    return 0;
}

