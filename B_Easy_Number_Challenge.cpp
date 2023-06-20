#include <bits/stdc++.h>
using namespace std;
#define mod 1073741824
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<=b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
vector<ll int>A;
map<int,int>M;
void primeFactors(int n)
{
    if(n==1)
    M[n]++;
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        M[c]++;
        n/=c;
        }
        else c++;
    }
    cout<<endl;

}
int nogcd(int x)
{
    int p=1;
    primeFactors(x);
    for(auto& i:M)
    {
      p=p*(i.second+1)%mod;
    }
    return p;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    fr(i,1,a,1)
    {
      fr(j,1,b,1)
      {
        fr(k,1,c,1)
        {
         A.push_back(i*j*k);
        }
      }
    }
    for(auto& i:A)
    {
        sum=sum+(nogcd(i))%mod;
    }
    cout<<sum%mod;
    return 0;
}

