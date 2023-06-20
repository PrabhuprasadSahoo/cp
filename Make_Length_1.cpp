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
      int n;
      string A;
      cin>>n>>A;
      stack<char>stk;
      stk.push(A[0]);
      for(int i=1;i<n;i++)
      {
        if(stk.top()==A[i])
        {
            stk.pop();
            stk.push(0);
        }
        else
        stk.push(A[i]);
      }
    
    if(stk.size()==1)
    cout<<"YES\n";
    else
    {
        char ch=stk.top();
        stk.pop();
        while(stk.size()!=0 && stk.top()==ch)
        stk.pop();
        if(stk.size()==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    }
    return 0;
}

