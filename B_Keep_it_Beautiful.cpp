#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define V vector<ll int> 
#define VP vector<pair<ll int,ll int>> 
#define MP map<ll int,ll int> 
#define pb push_back
#define ff first 
#define ss second 
#define input(A) for(auto &i:A)cin>>i
#define output(A) for(auto &i:A)cout<<i<<" "
void solve(int t)
{
  int n;
  cin>>n;
  V A(n);
  input(A);
  V B;
  string s="1";
  bool O_e=false;
  B.pb(A[0]);
  int x=1;
  //B.pb(A[1]);
  //if(A[0]>A[1])
  //O_e=true;
  for(int i=1;i<n;i++)
  {
    
        if(O_e)
        {
            if(A[i]<=B[0] && A[i]>=B[x-1])
            {
                B.pb(A[i]);
                s+='1';
                x++;
            }
            else
            {
                s+='0';
            }
        }
        else
        {
            if(A[i]>=B[x-1])
            {
                B.pb(A[i]);
                x++;
                s+='1';
            }
            else if(A[i]<=B[0] && A[i]<B[x-1])
            {
                B.pb(A[i]);
                x++;
                s+='1';
                O_e=true;
            }
            else
            {
                s+='0';
            }
        }
    
  }
  cout<<s<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       solve(t);
    }
    return 0;
}

