#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--)
    {
        fr(i,1,n,1)
        {
            if(s[i-1]=='B' && s[i]=='G')
            {
                s[i-1]='G';
                s[i]='B';
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}

