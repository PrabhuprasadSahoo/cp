#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
static int c=0;
void subs(int A[],int index,vector<int> &subarr,int n,int k,int &c)
{
  if(index==n)
  {
    int sum=0;
    for(auto it:subarr){
       sum+=it;
    }
    if(sum%k!=0)
    c++;
    return;
  }
  else
  {
    subarr.push_back(A[index]);
    subs(A,index+1,subarr,n,k,c);
    subarr.pop_back();
    subs(A,index+1,subarr,n,k,c);
  }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int cou=0;
        int n,k;
        cin>>n>>k;
        int A[n];
        fr(i,0,n,1)
        {
            cin>>A[i];
        }
        vector<int>vec;
        subs(A,0,vec,n,k,cou);
        cout<<cou<<endl;
    }
    return 0;
}

