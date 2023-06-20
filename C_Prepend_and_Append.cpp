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
        cin>>n;
        string s;
        cin>>s;
        ll int c=0;
        int i=0;
        int j=n-1;
        while(j>=i && (s[i]!=s[j]))
        {
            c+=2;
            i++;
            j--;
        }
        /*if(c==2*n)
        cout<<"0\n";
        else*/
        cout<<n-c<<endl;
    }
    return 0;
}

