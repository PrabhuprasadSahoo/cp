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
    int l=s.length();
    vector<char>v;
    for(int i=0;i<l;i++)
    {
        if(s[i]!='+')
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(auto i=v.begin();i<v.end()-1;i++)
    {
        cout<<*i<<"+";
    }
    cout<<v.back();

    return 0;
}

