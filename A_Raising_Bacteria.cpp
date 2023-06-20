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
    vector<int>s;
    int c=0;
    while(n>0)
    {
      s.push_back(n%2);
      n/=2;
    }
    for(int i=0;i<s.size();i++)
    {
    if(s[i]==1)
    c++;
    }
    cout<<c;
    return 0;
}

