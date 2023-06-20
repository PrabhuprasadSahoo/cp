#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1;
        int c=0;
        char a=s[0];
        fr(i,0,s.length()+1,1)
        {
            if(s[i]==a)
            c++;
            else
            {
                string temp,temp1;
                temp=a;
                s1.append(temp);
                temp1 = to_string(c);
                s1.append(temp1);
                a=s[i];
                c=0;
            }
        }
        if(s1.length()<s.length())
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}

