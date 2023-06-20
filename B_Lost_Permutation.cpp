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
        int m,s;
        cin>>m>>s;
        int sum=0;
        vector<int>B;
        fr(i,0,m,1)
        {
            int x;
            cin>>x;
            B.push_back(x);
        }
        int k=1;
        while(s>0)
        {
            if(find(B.begin(),B.end(),k)==B.end())
            {
              B.push_back(k);
              s-=k;
            }
            k++;
        }
        if(s==0 && B.size()==*max_element(B.begin(),B.end()))
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    return 0;
}

