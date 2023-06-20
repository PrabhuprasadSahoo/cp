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
    set<char>S;
    fr(i,0,n,1)
    {
      S.insert(s[i]);
    }
    if(S.size()%2==0)
    {
      cout<<"CHAT WITH HER!";
    }
    else{
      cout<<"IGNORE HIM!";
    }
    return 0;
}

