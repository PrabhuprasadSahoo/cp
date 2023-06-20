#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}
void decimalToFraction(double number)
{
    double intVal = floor(number);
    double fVal = number - intVal;
    const long pVal = 1000000000;
    ll gcdVal=gcd(round(fVal * pVal), pVal);
    ll num = round(fVal * pVal) / gcdVal;
    ll deno = pVal / gcdVal;
    cout << (intVal * deno) + num
         << " " << deno << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n,k;
    cin>>n>>k;
    float ans = 1 - (float)exp(-(k*k)/pow(2,n));
    //cout<<ans;
    decimalToFraction(ans);
    return 0;
}

