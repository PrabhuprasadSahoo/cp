#include<bits/stdc++.h>
using namespace std;
int cr[]={1,5,10,20,100};
int n=sizeof(cr)/sizeof(cr[0]);
void bank(int s)
{
 int c=0;
 for(int i=n-1;i>=0;i--)
 {
     while(s>=cr[i])
     {
         s-=cr[i];
         c++;
     }
 }
 cout<<c;
}
 
int main()
{
    int amt;
    cin>>amt;
    bank(amt);
    return 0;
}
