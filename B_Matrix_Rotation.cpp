#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
bool is_beautiful(int a,int b,int c,int d)
{
  if(a>b && a>c && b>d && c>d)
  return true;
  else
 return false;
 }
void rotate(int &a,int &b,int &c,int &d)
{
  int t=a;
  a=c;
  c=d;
  d=b;
  b=t;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2;
        int y1,y2;
        cin>>x1>>x2;
        cin>>y1>>y2;
        int c=0;
        fr(i,0,4,1)
        {
            if(is_beautiful(x1,x2,y1,y2))
            {
            cout<<"YES\n";
            break;
            }
            else
            {
              rotate(x1,x2,y1,y2);
              c++;
            }
        }
        if(c==4)
        cout<<"NO\n";
    }
    return 0;
}

// a b
// c d
// t=a  a=c c=d d=b b=t a>c a>b c>d b>d