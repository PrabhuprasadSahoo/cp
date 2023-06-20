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
        vector<int>R;
        vector<int>B;
        int n;
        cin>>n;
        fr(i,0,n,1)
        {
           cin>>R[i];
        }
        fr(i,0,n,1)
        {
           cin>>B[i];
        }
        int max1=INT_MIN;
        int ind1;
        fr(i,0,n,1)
        {
            if(R[i]>max1)
            {
                max1=R[i];
                ind1=i;
            }
        }int max2=INT_MIN;
        int ind2;
        fr(i,0,n,1)
        {
            if(B[i]>max2)
            {
                max2=R[i];
                ind2=i;
            }
        }
        

        
    }
    return 0;
}

