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
    vector<string>s;
    while(t--)
    {
        string x;
        cin>>x;
        s.push_back(x);
    }
    reverse(s.begin(),s.end());
    for(auto& i:s)
    cout<<i<<endl;
    return 0;
}

