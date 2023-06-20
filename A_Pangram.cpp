#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string S;
    cin>>S;
    map<char,int>mp;
    fr(i,0,n,1)
    {
        mp[tolower(S[i])]++;
    }
    if(mp.size()==26)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}

