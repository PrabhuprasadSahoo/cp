#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,a,b,k) for(int i=a;i<b;i+=k)
#define frrev(i,a,b,k) for(int i=a;i>b;i-=k)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int number_hit[4], total, count = 0;
    for(int i = 0; i < 4; i++)
        cin >> number_hit[i];
    cin >> total;
    for(int i = 1; i <= total; i++){
        for(int j = 0; j < 4; j++)
        {
            if(i % number_hit[j] == 0){
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}
