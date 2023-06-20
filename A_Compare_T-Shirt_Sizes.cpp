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
       string s1;
       string s2;
       cin>>s1;
       cin>>s2;
       int l1=s1.length();
       int l2=s2.length();
       if(s1[l1-1]=='S' && s2[l2-1]=='S'){if(l1==l2)cout<<"=\n"; else if (l1>l2)cout<<"<\n"; else cout<<">\n";}
       else if(s1[l1-1]=='S' && s2[l2-1]=='M')cout<<"<\n";
       else if(s1[l1-1]=='S' && s2[l2-1]=='L')cout<<"<\n";
       else if(s1[l1-1]=='M' && s2[l2-1]=='S')cout<<">\n";
       else if(s1[l1-1]=='M' && s2[l2-1]=='M')cout<<"=\n";
       else if(s1[l1-1]=='M' && s2[l2-1]=='L')cout<<"<\n";
       else if(s1[l1-1]=='L' && s2[l2-1]=='S')cout<<">\n";
       else if(s1[l1-1]=='L' && s2[l2-1]=='M')cout<<">\n";
       else if(s1[l1-1]=='L' && s2[l2-1]=='L'){if(l1==l2)cout<<"=\n"; else if (l1>l2)cout<<">\n"; else cout<<"<\n";}
    }
    return 0;
}

