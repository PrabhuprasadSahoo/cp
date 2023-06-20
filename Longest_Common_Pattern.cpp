#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        string B;
        int  CA[52]={0};
        int CB[52]={0};
        cin>>A;
        cin>>B;
        int a=A.length();
        int b=B.length();
        for(int i=0;i<a;i++)
        {
           if(A[i]>='A' && A[i]<='Z')
           CA[A[i]-65]++;
           else if(A[i]>='a' && A[i]<='z')
           CA[A[i]-97+26]++;
        }
        for(int i=0;i<b;i++)
        {
           if(B[i]>='A' && B[i]<='Z')
           CB[B[i]-65]++;
           else if(B[i]>='a' && B[i]<='z')
           CB[B[i]-97+26]++;
        }
        int c=0;
        for(int i=0;i<52;i++)
        {
            if(CA[i]==CB[i])
            c++;
        }
        cout<<c<<endl;
        
    }
    return 0;
}

