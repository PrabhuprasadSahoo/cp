#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int max=1;
    int len=1;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            len++;
        }
        else
        {
            if(max<len)
            {
                max=len;
            }
            len=1;
        }
    }
     if(max<len)
            {
                max=len;
            }

    cout<<max;
    return 0;
}