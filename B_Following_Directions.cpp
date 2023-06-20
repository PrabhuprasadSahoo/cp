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
        int x=0;
        int y=0;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        fr(i,0,n,1)
        {
            if(s[i]=='U')y++;
            else if(s[i]=='D')y--;
            else if(s[i]=='L')x--;
            else if(s[i]=='R')x++;

            if(x==1 && y==1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    
    }
    return 0;
}

