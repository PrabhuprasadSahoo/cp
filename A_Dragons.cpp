#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>V;
    fr(i,0,n,1)
    {
        int x,y;
        cin>>x>>y;
        V.push_back(make_pair(x,y));
    }
    sort(V.begin(),V.end());
    int c=0;
    fr(i,0,n,1)
    {
        if(s>V[i].first)
        {
        s+=V[i].second;
        c++;
        }
        else
        {
            cout<<"NO";
            break;
        }
    }
    if(c==n)
    cout<<"YES";
    return 0;
}

