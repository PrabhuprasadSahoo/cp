#include <bits/stdc++.h>
using namespace std;

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
        int flaga=0;
        int flagb=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int H[(n/2)];
        for(int i=0;i<n/2;i++)
        {
            if((A[n-i-1]-A[i])<0){
                flaga=1;
                break;
            }
            else
            H[i]=(A[n-i-1]-A[i]);
        }
        for(int i=0;i<(n/2)-1;i++)
        {
            if(H[i]<H[i+1]){
                flagb=1;
                break;
            }
        }
        if(flaga==1 || flagb==1)
        cout<<"-1\n";
        else
        cout<<H[0]<<endl;
        
            
    }
    return 0;
}


