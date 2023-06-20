#include<bits/stdc++.h>
using namespace std;
bool prime(int i){
int j,s=0;
for(j=2;j<=i/2;j++){
if((i%j)==0)
    s++;
}
return(!s);
}
int main(){
int m,n,i;
cin>>n>>m;
i=n+1;
while(!(prime(i)))
{i++;}
if(m==i)
cout<<"YES";
else
cout<<"NO";
return 0;
}
