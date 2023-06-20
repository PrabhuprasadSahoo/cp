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
    unordered_map<string,int>M;
    while(t--)
    {
        string s;
        cin>>s;
        if(M.find(s)==M.end())
        {
            cout<<"OK\n";
            M[s]=0;
        }
        else
        {
            auto it=M.find(s);
            M[s]++;
            cout<<s<<it->second<<endl;
        }
    }
    return 0;
}

