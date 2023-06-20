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
    cout<<stricmp(s1,s2);
    return 0;
}

