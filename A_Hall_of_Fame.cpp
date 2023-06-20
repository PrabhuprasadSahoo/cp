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
        int l;
        cin>>l;
        string s;
        cin>>s;
        int c=1;
        fr(i,1,l,1)
        {
            if(s[i]==s[0])
            c++;
        }
        if(c==0 || c==l)
        cout<<"-1"<<endl;
        else
        {
            fr(i,0,l-1,1)
            {
                if(s[i]=='R' && s[i+1]=='L')
                {
                    cout<<"0"<<endl;
                    break;
                }
                else if(s[i]=='L'&&s[i+1]=='R')
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

