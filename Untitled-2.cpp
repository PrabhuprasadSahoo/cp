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
void Square(vector<vector<int>>A,int n)
{
    int S[n][n];
    int ms, mi, mj;
 
    
    fr (i,0,n,1)
        S[i][0] = A[i][0];
 

    fr (j,0,n,1)
        S[0][j] = A[0][j];
 

    fr(i,1,n,1) {
        fr (j,1,n,1) {
            if (A[i][j] == 1)
                S[i][j]= min({ S[i][j - 1],S[i - 1][j],S[i - 1][j - 1] })+ 1; 
            else
                S[i][j] = 0;
        }
    }
    ms = S[0][0];
    mi = 0;
    mj = 0;
    fr(i,0,n,1) {
        fr (j,0,n,1) {
            if (ms < S[i][j]) {
                ms = S[i][j];
                mi = i;
                mj = j;
            }
        }
    }
    
  
}
void solve(int t)
{
 string s;
 cin>>s;
 int n=s.length();
 vector<int>p;
 fr(i,0,n,1)
 p.push_back(s[i]-'0');
 vector<int>X(n);
 vector<vector<int>>A;
 fr(i,0,s.length(),1)
 {
    fr(j,0,n,1)
    {
        if(j<i)
        X[j]=p[n+j-i];
        else
        X[j]=p[j-i];
    }
    A[i]=X;
}
Square(A,n);
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

