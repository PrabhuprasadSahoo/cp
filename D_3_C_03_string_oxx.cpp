#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     string s;
    cin>>s;
    int n=s.length();
    int f=0;
    if(n==2)
    {
       if(s[0]=='o' && s[1]=='o')
       cout<<"No";
       else
       cout<<"Yes";
    }
    if(n>3){
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='o')
            {
                if(s[i-1]!='x' && s[i+1]!='x')
                    f=1;
            }
else if(s[i]=='x')
            {
                if(s[i-1]=='x' && s[i+1]=='o')
                    f=0;
                else if(s[i-1]=='o' && s[i+1]=='x')
                    f=0;
                else 
                    f=1;
            }
        }
        if(f==1)
            cout<<"No";
        else
            cout<<"Yes";
    }
    else
        cout<<"Yes";
    return 0;
}

