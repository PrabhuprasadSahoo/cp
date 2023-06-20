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
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int fin=0;
        for(int i=0;i<n;i++)
        {
            int sc1=0;
            int sc2=0;
            if(s1[i]<s2[i])
            {
                sc1=s2[i]-s1[i];
                sc2=-1*(('z'-s2[i])+(s1[i]-'a')+1);
            }
            else
            {
                sc1=(('z'-s1[i])+(s2[i]-'a')+1);
                sc2=-1*(s1[i]-s2[i]);
            }
            fin=min(abs(sc1+fin),abs(sc2+fin));
        }
        cout<<abs(fin)<<endl;
    }
    return 0;
}

