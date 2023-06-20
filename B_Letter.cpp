#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s1[201];
    char s2[201];
    cin.getline(s1,201);
    cin.getline(s2,201);
    map<char,int>mp;
    fr(i,0,s1.length(),1)
    {
        mp[s1[i]]++;
    }
    
    return 0;
}

