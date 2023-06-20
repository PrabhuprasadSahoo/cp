#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int A1[26]={0};
    int A2[26]={0};
    fr(i,0,s1.length(),1)
    {
        A1[s1[i]-97]++;
    }
    fr(i,0,s2.length(),1)
    {
        A2[s2[i]-97]++;
    }
    int f=0;
    fr(i,0,26,1)
    {
        if(A1[i]!=A2[i])
        {
            f=1;
            break;
        }
    }
    if(s1.length()==s2.length() && f==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

