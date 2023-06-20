#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    //vector<int>V;
    int back=0;
    int biceps=0;
    int chest=0;

    fr(i,0,n,1)
    {
        int x;
        cin>>x;
        if((i+1)%3==0)
        back+=x;
        else if((i+1)%3==1)
        chest+=x;
        else
        biceps+=x;
    }
    if(back>biceps && back>chest)
    cout<<"back";
    else if(biceps>back && biceps>chest)
    cout<<"biceps";
    else
    cout<<"chest";
    return 0;
}

