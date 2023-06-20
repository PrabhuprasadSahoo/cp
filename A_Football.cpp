#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    int n;
    cin>>n;
    unordered_map<string,int>M;
    while(n--)
    {
        string s;
        cin>>s;
        M[s]++;
    }
    int m = INT16_MIN;
    int max=0;
    string s2;
  for(auto i : M)
  {
    if(max<i.second)
    {
        s2=i.first;
        max=i.second;
    }
  }
  cout<<s2;
}

