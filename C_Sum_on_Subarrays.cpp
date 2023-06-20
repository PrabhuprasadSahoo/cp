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
bool check(int i,int k){
  if(i*(i+1) == 2*k){
    return true;
  }
  return false;
}
void solve(int t)
{
   int n , k ;
  cin>>n>>k;
 int uu=-1000;
 vector<int> a(n+1,uu);


if(k == 0){
  for(int i=0;i<n;i++){
    cout<<-1<<" ";
  }
  cout<<endl;
  return;
}


int index = 1 ; 
for(int i = 1 ; i<= n ; i++){
   if(check(i,k)){
     index = i ; 
   break; 
   }
   else if(i*(i+1) > 2*k){
     break;
   }
  index = i ; 
}



for(int i = 1 ; i<=n;i++){
  if(i <= index){
   a[i] = 2; 
  }
  else a[i] = -1000 ; 
}

int f = index*(index+1)/2 ; 
int N = k - f ; 

if(N == 0){
for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  
  return;
}

  
int sum = 0 ; 
int i = index ; 

while(i > N-1){
  sum += 2 ; 
  i--;
}
sum--; 
a[index+1] = -sum ; 
for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
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

