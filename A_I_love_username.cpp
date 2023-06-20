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
    int x;
    cin>>x;
    int max=x;
    int min=x;
    int c=0;

    fr(i,0,n-1,1)
    {
        cin>>x;
        if(x>max)
        {
            max=x;
            c++;
        }
        if(x<min)
        {
            min=x;
            c++;
        }
       
    }
    cout<<c;
    return 0;
}