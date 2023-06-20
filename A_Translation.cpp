#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s1[101];
    char s2[101];
    cin>>s1;
    cin>>s2;
    if(strcmp(strrev(s1),s2)==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

