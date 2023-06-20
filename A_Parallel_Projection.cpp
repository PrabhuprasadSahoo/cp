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
    while(t--)
    {
      int w,d,h;
      cin>>w>>d>>h;
      int a,b,f,g;
      cin>>a>>b>>f>>g;
      int l1=h+g+abs(a-f)+b;
      int l2=h+abs(g-d)+abs(d-b)+abs(a-f);
      int l3=h+f+a+abs(b-g);
      int l4=h+abs(w-f)+abs(w-a)+abs(b-g);
      vector<int>ans;
      ans.push_back(l1);
      ans.push_back(l2);
      ans.push_back(l3);
      ans.push_back(l4);
      sort(ans.begin(),ans.end());
      cout<<ans[0]<<endl;

    }
    return 0;
}

