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
      //vector<int>A(n);
      int oc=0;
      int ec=0;
      vector<int>OA;
      vector<int>EA;
      fr(i,0,n,1)
      {
        int x;
        cin>>x;
        if(x%2!=0){oc++;OA.push_back(i+1);}
        else {ec++;EA.push_back(i+1);}
      }  
      if(((oc>=3) || (oc>=1 && ec>=2)))
      {
        cout<<"YES\n";
        if(oc>=3)
        {
            cout<<OA[0]<<" "<<OA[1]<<" "<<OA[2]<<endl;
        }
        else
        {
            cout<<EA[0]<<" "<<EA[1]<<" "<<OA[0]<<endl;
        }
      
      }
      else
      {
       cout<<"NO\n"; 
      }
      //cout<<oc<<" "<<ec<<endl;
    }
    return 0;
}

