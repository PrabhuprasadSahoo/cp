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
    int sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")sum+=4;
        else if(s=="Cube")sum+=6;
        else if(s=="Octahedron")sum+=8;
        else if(s=="Dodecahedron")sum+=12;
        else if(s=="Icosahedron")sum+=20;
    }
    cout<<sum;
    
    return 0;
}

