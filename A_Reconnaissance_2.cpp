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
        fr(i,0,n,1)
        {
            int x;
            cin>>x;
            V.push_back(x);
        }
        V.push_back(V[0]);
        int min=INT16_MAX;
        int a;
        fr(i,0,n,1)
        {
            if(abs(V[i]-V[i+1])<min)
            {
                min=abs(V[i]-V[i+1]);
                a=i;
            }
        }
        if(a+1==n)
        {
            cout<<a+1<<" 1";
        }
        else
        cout<<a+1<<" "<<a+2;
    
    return 0;
}

