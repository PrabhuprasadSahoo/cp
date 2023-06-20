#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>X;
    fr(i,0,m,1)
    {
        int x;
        cin>>x;
        X.push_back(x);
    }
    sort(X.begin(),X.end());
    int t=INT16_MAX;
    for(int i=0;i<=m-n;i++)
	if(X[n-1+i]-X[i]<t)
		t=X[n-1+i]-X[i];
	cout<<t;
    return 0;
}

