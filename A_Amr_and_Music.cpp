#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
   vector<int>Ans;
   vector<pair<int,int>>mp;
    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        mp.push_back(make_pair(x,i+1));
    }
    sort(mp.begin(),mp.end());
    for(auto& j:mp)
    { 
       if(k<j.first)
        break;
        else
       {
         Ans.push_back(j.second);
        k-=j.first;
       }
       
    }
    sort(Ans.begin(),Ans.end());
    cout<<Ans.size()<<endl;
    for(auto& k:Ans)
    cout<<k<<" ";
    
    return 0;
}

